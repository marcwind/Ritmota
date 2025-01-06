/* Declares the Ritmota2 Audio Worklet Processor */

class Ritmota2_AWP extends AudioWorkletGlobalScope.WAMProcessor
{
  constructor(options) {
    options = options || {}
    options.mod = AudioWorkletGlobalScope.WAM.Ritmota2;
    super(options);
  }
}

registerProcessor("Ritmota2", Ritmota2_AWP);
