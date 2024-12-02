% MATLAB Visualization Script for Soil Moisture Level

% Channel ID and Field ID
channelID = YOUR_CHANNEL_ID;
fieldID = 1;

% Read data from ThingSpeak
[data, timestamps] = thingSpeakRead(channelID, 'Fields', fieldID, 'NumPoints', 8000);

% Create a plot
figure;
plot(timestamps, data, 'LineWidth', 2);
title('Soil Moisture Level Over Time');
xlabel('Time');
ylabel('Soil Moisture Level');
grid on;
datetick('x', 'dd-mmm-yyyy HH:MM:SS', 'keepticks');

% Customize colors
ax = gca;
ax.XColor = [0.5, 0.5, 0.5]; % Grey
ax.YColor = [0.5, 0.5, 0.5]; % Grey
set(gca, 'Color', [0.9, 0.9, 0.9]); % Light grey background
set(gca, 'GridColor', [0.7, 0.7, 0.7]); % Grid color
