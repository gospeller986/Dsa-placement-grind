#include <iostream>
#include <vector>
#include <algorithm>

int calculateDroppedPackets(std::vector<std::vector<int>>& requests, int max_packets, int rate) {
    int total_dropped_packets = 0;
    int current_queue_size = 0;
    int current_time = 0;

    for (auto& request : requests) {
        int time = request[0];
        int packets = request[1];

        // Update the queue size based on the elapsed time
        if (time > current_time) {
            int packets_to_remove = std::min(rate, current_queue_size);
            current_queue_size -= packets_to_remove;
            current_time = time;
        }

        // Drop packets if the queue is full
        if (current_queue_size + packets > max_packets) {
            int dropped_packets = current_queue_size + packets - max_packets;
            total_dropped_packets += dropped_packets;
            current_queue_size = max_packets;
        }
        else {
            current_queue_size += packets;
        }
    }

    // Process any remaining packets in the queue
    while (current_queue_size > 0) {
        int packets_to_remove = std::min(rate, current_queue_size);
        current_queue_size -= packets_to_remove;
        current_time += 1;
    }

    return total_dropped_packets;
}

int main() {
    std::vector<std::vector<int>> requests = {{1, 5}, {2, 3}, {3, 6}, {5, 2}, {6, 1}};
    int max_packets = 8;
    int rate = 4;

    int dropped_packets = calculateDroppedPackets(requests, max_packets, rate);
    std::cout << "Total dropped packets: " << dropped_packets << std::endl;
    
    return 0 ;
}