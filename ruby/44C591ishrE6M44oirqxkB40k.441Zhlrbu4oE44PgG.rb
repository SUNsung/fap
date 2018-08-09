
        
          def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
      def elisp_caveats
    return if f.keg_only?
    if keg && keg.elisp_installed?
      <<-EOS.undent
        Emacs Lisp files have been installed to:
          #{HOMEBREW_PREFIX}/share/emacs/site-lisp/#{f.name}
      EOS
    end
  end
    
        # Get rid of any info 'dir' files, so they don't conflict at the link stage
    info_dir_file = @f.info + 'dir'
    if info_dir_file.file? && !@f.skip_clean?(info_dir_file)
      observe_file_removal info_dir_file
    end
    
      def describe_path(path)
    return 'N/A' if path.nil?
    realpath = path.realpath
    if realpath == path
      path
    else
      '#{path} => #{realpath}'
    end
  end
    
      def updated
    object.updated_at.iso8601
  end
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/reblog
  def reblog
    r = Status.where.not(reblog_of_id: nil).first
    NotificationMailer.reblog(r.reblog.account, Notification.find_by(activity: r))
  end
    
    Print a list of currently running Applications and associated
Bundle IDs, which may be useful in a Cask uninstall stanza, eg
    
    input = ARGV.shift() || usage()
    
    meterp.core.use('Stdapi')
    
    require 'rubygems'
require 'rjb'