
        
                subscription_klass = id_options[:channel].safe_constantize
    
    require 'abstract_unit'
    
                  when_connected do
                send_command('unsubscribe')
                @raw_client = nil
              end
            end
    
          def on_error(message) # :nodoc:
        # log errors to make diagnosing socket errors easier
        logger.error 'WebSocket error occurred: #{message}'
      end
    
      def call_controller(klass, action)
    klass.action(action).call(@request.env)
  end
    
      s.author   = 'David Heinemeier Hansson'
  s.email    = 'david@loudthinking.com'
  s.homepage = 'http://rubyonrails.org'
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
        included do
      # Do not make this inheritable, because we always want it to propagate
      cattr_accessor :raise_delivery_errors, default: true
      cattr_accessor :perform_deliveries, default: true
      cattr_accessor :deliver_later_queue_name, default: :mailers
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    def test_dir(*subdirs)
  File.join(TEST_DIR, *subdirs)
end
    
      File.write(Paths.status_file, p.exitstatus)
  File.open(Paths.output_file, 'wb') do |f|
    f.print '$ '
    f.puts args.join(' ')
    f.puts output
    f.puts 'EXIT STATUS: #{p.exitstatus}'
  end
    
              # If it's a directory they want to exclude, AKA
          # ends with a '/' then we will go on to check and
          # see if the entry falls within that path and
          # exclude it if that's the case.
    
        def place_in_layout?
      false
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
    
      def describe_perl
    describe_path(which 'perl')
  end
    
      UNBREWED_EXCLUDE_FILES = %w[.DS_Store]
  UNBREWED_EXCLUDE_PATHS = %w[
    .github/*
    bin/brew
    lib/gdk-pixbuf-2.0/*
    lib/gio/*
    lib/node_modules/*
    lib/python[23].[0-9]/*
    lib/pypy/*
    lib/pypy3/*
    lib/ruby/gems/[12].*
    lib/ruby/site_ruby/[12].*
    lib/ruby/vendor_ruby/[12].*
    share/pypy/*
    share/pypy3/*
    share/doc/homebrew/*
    share/info/dir
    share/man/man1/brew.1
    share/man/whatis
  ]
    
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
    
      DATA = :DATA
    
      def dry_run!(event = nil)
    @dry_run = true
    
        gem_dependency_check { defined?(EvernoteOAuth) && Devise.omniauth_providers.include?(:evernote) }
  end
    
        def every(*args, &blk)
      schedule(:every, args, &blk)
    end
    
        if params[:sort].present?
      attribute, direction = params[:sort].downcase.split('.')
      unless valid_sorts.include?(attribute)
        attribute, direction = default.to_a.first
      end
    else
      attribute, direction = default.to_a.first
    end
    
    map = {}
dups = []
    
    require 'cocoapods'
    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end
