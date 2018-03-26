
        
          # Make it so that network access from the vagrant guest is able to
  # use SSH private keys that are present on the host without copying
  # them into the VM.
  config.ssh.forward_agent = true
    
        sidekiq_options queue: 'critical'
    
      def recipients(payload = {})
    emails = interpolated(payload)['recipients']
    if emails.present?
      if emails.is_a?(String)
        [emails]
      else
        emails
      end
    else
      [user.email]
    end
  end
    
          if options[:roles].is_a?(Symbol)
        options[:roles] = [options[:roles]]
      end
    
      def destroy_failed
    Delayed::Job.where.not(failed_at: nil).delete_all
    
        it 'returns false if osxfuse include directory is a symlink' do
      allow(File).to receive(:exist?).and_return(true)
      allow(File).to receive(:symlink?).and_return(true)
      expect(described_class).not_to be_binary_osxfuse_installed
    end
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