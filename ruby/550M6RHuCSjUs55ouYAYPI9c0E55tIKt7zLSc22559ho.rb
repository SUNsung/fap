
        
          def post_superenv_hacks
    # Only allow Homebrew-approved directories into the PATH, unless
    # a formula opts-in to allowing the user's path.
    if formula.env.userpaths? || reqs.any? { |rq| rq.env.userpaths? }
      ENV.userpaths!
    end
  end
    
      # True if a {Formula} is being built universally.
  # e.g. on newer Intel Macs this means a combined x86_64/x86 binary/library.
  # <pre>args << '--universal-binary' if build.universal?</pre>
  def universal?
    include?('universal') && option_defined?('universal')
  end
    
        def self.cleanup_cellar
      Formula.installed.each do |formula|
        cleanup_formula formula
      end
    end
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
        updated_taps = []
    Tap.each do |tap|
      next unless tap.git?
      begin
        reporter = Reporter.new(tap)
      rescue Reporter::ReporterRevisionUnsetError => e
        onoe e if ARGV.homebrew_developer?
        next
      end
      if reporter.updated?
        updated_taps << tap.name
        hub.add(reporter)
      end
    end
    
      def present(payload)
    if payload.is_a?(Hash)
      payload = ActiveSupport::HashWithIndifferentAccess.new(payload)
      MAIN_KEYS.each do |key|
        return { :title => payload[key].to_s, :entries => present_hash(payload, key) } if payload.has_key?(key)
      end
    
      def validate_evernote_options
    unless evernote_consumer_key.present? &&
      evernote_consumer_secret.present? &&
      evernote_oauth_token.present?
      errors.add(:base, 'Evernote ENV variables and a Service are required')
    end
  end
    
      if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile: