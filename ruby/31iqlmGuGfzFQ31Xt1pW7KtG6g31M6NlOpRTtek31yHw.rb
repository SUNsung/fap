
        
              def print_summary(features)
        @io.puts
        print_stats(features, @options)
        print_snippets(@options)
        print_passing_wip(@options)
      end
    end
  end
end
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        def set_report_note
      @report_note = ReportNote.find(params[:id])
    end
  end
end

    
      private
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
      def encoded_challenge
    HTMLEntities.new.encode(params['hub.challenge'])
  end
    
      included do
    before_action :authenticate_user!
    before_action :load_export
  end
    
      # Configure an appender that will write log events to STDOUT. A colorized
  # pattern layout is used to format the log events into strings before
  # writing.
  Logging.appenders.stdout('stdout',
                           auto_flushing: true,
                           layout:        Logging.layouts.pattern(
                             pattern:      pattern,
                             color_scheme: 'bright'
                           )
                          ) if config.log_to.include? 'stdout'
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
        context 'for a logged out user' do
      before do
        sign_out :user
      end