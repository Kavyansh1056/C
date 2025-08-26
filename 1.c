import tensorflow as tf
import numpy as np

model = tf.keras.Sequential([
    tf.keras.layers.Dense(5, input_shape=(10,), activation='relu'),
    tf.keras.layers.Dense(1)
])

model.compile(optimizer='sgd', loss='mse')

x = np.random.rand(100, 10)
y = np.random.rand(100, 1)

model.fit(x, y, epochs=5, verbose=1)
