# Use an official GCC image as a base
FROM gcc:latest

# Set the working directory
WORKDIR /usr/src/app

# Install Valgrind and necessary tools
RUN apt-get update && \
    apt-get install -y make valgrind

# Copy the source code and Dockerfile to the container
COPY . .

# Build the application
RUN g++ -std=c++98 -Wall -Wextra -Werror -o ex02 main.cpp

# Default command to run the application
CMD ["./ex02"]
