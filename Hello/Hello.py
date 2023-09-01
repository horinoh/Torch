import torch
import torch.nn as nn
import torch.optim as optim
from torchinfo import summary
from torchviz import make_dot

import numpy as np
import matplotlib.pyplot as plt
import japanize_matplotlib

device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
print("Hello PyTorch")
print("Device Type = " + str(device))

#plt.plot(x, y)

#plt.xlim(-4, 4)
#plt.ylim(-4, 4)
#plt.legend()
#plt.show()