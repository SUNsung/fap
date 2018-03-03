
        
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
    
    require 'bundler/setup'
require 'json'
require 'stackprof'
require File.expand_path('../lib/jekyll', __dir__)
    
    def run_jekyll(args)
  args = args.strip.split(' ') # Shellwords?
  process = run_in_shell('ruby', Paths.jekyll_bin.to_s, *args, '--trace')
  process.exitstatus.zero?
end
    
        def arg_is_present?(args, deprecated_argument, message)
      if args.include?(deprecated_argument)
        deprecation_message(message)
      end
    end
    
          #
      # Require a gem or gems. If it's not present, show a very nice error
      # message that explains everything and is much more helpful than the
      # normal LoadError.
      #
      # names - a string gem name or array of gem names
      #
      def require_with_graceful_fail(names)
        Array(names).each do |name|
          begin
            Jekyll.logger.debug 'Requiring:', name.to_s
            require name
          rescue LoadError => e
            Jekyll.logger.error 'Dependency Error:', <<-MSG
Yikes! It looks like you don't have #{name} or one of its dependencies installed.
In order to use Jekyll as currently configured, you'll need to install this gem.
    
        # Initialize a new Layout.
    #
    # site - The Site.
    # base - The String path to the source.
    # name - The String filename of the post file.
    def initialize(site, base, name)
      @site = site
      @base = base
      @name = name
    
      private
    
        registration
  end
    
      test 'should always have confirmation token when email is sent' do
    user = new_user
    user.instance_eval { def confirmation_required?; false end }
    user.save
    user.send_confirmation_instructions
    assert_not_nil user.reload.confirmation_token
  end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
    gemspec
    
      # Controllers inheriting DeviseController are advised to override this
  # method so that other controllers inheriting from them would use
  # existing translations.
  def translation_scope
    'devise.#{controller_name}'
  end
    
        ActiveSupport.on_load(:action_view) do
      include scope::UrlHelpers
    end
  end
    
            # Initialize the provider to represent the given machine.
        #
        # @param [Vagrant::Machine] machine The machine that this provider
        #   is responsible for.
        def initialize(machine)
        end
    
          def merge!(other)
        other.each do |key, value|
          self[convert_key(key)] = value
        end
        self
      end
    
        select_pairs = []
    reject_pairs = []
    h.dup.send(@method) { |*pair| select_pairs << pair }
    h.reject { |*pair| reject_pairs << pair }
    
      it 'ignores underscores between numbers' do
    '190_22'.to_r.should == Rational(19022, 1)
    '-190_22.7'.to_r.should == Rational(-190227, 10)
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

    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end