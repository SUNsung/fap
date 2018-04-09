
        
          it 'is deferred if ensure clause does Thread.stop' do
    ThreadSpecs.wakeup_dying_sleeping_thread(@method) { Thread.stop; ScratchPad.record :after_sleep }
    ScratchPad.recorded.should == :after_sleep
  end
    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end