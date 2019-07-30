
        
        class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
          def parse_uri(location)
        location && URI.parse(location)
      rescue URI::InvalidURIError
        nil
      end
    
        def default_used_helpers(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
      def formulae
    require 'formula'
    # TODO: use @instance variable to ||= cache when moving to CLI::Parser
    (downcased_unique_named - casks).map do |name|
      if name.include?('/') || File.exist?(name)
        Formulary.factory(name, spec)
      else
        Formulary.find_with_priority(name, spec)
      end
    end.uniq(&:name)
  end
    
        it 'When plist_options are not defined when using a formula-defined plist', :ruby23 do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
    
          its(:suggestion) { is_expected.to match(%r{brew cask install homebrew/cask-versions/adoptopenjdk8}) }
      its(:cask) { is_expected.to eq('homebrew/cask-versions/adoptopenjdk8') }
    end
    
        args.present?
  end
end

    
            uses_from_macos('foo', after: :mojave)
      end
    
      describe '#uses_from_macos' do
    before do
      sierra_os_version = OS::Mac::Version.from_symbol(:sierra)
    
        def compilers_standard?
      STANDARD_COMPILERS.fetch(Xcode.version.to_s).all? do |method, build|
        send(:'#{method}_version') == build
      end
    rescue IndexError
      onoe <<~EOS
        Homebrew doesn't know what compiler versions ship with your version
        of Xcode (#{Xcode.version}). Please `brew update` and if that doesn't
        help, file an issue with the output of `brew --config`:
          #{Formatter.url('https://github.com/Homebrew/brew/issues')}
    
        attr_reader :force
    attr_accessor :downloaded_path
    
        def tmux_window_and_pane_target
      '#{project.name}:#{window_index}.#{pane_index}'
    end
    
    shared_examples_for 'a project hook' do
  let(:project) { FactoryBot.build(:project) }
    
        # This method was defined as something of a workaround...  Previously
    # the conditional contained within was in the executable (i.e.
    # bin/tmuxinator).  It has been moved here so as to be testable. A couple
    # of notes:
    # - ::start (defined in Thor::Base) expects the first argument to be an
    # array or ARGV, not a varargs.  Perhaps ::bootstrap should as well?
    # - ::start has a different purpose from #start and hence a different
    # signature
    def self.bootstrap(args = [])
      name = args[0] || nil
      if args.empty? && Tmuxinator::Config.local?
        Tmuxinator::Cli.new.local
      elsif name && !Tmuxinator::Cli::RESERVED_COMMANDS.include?(name) &&
            Tmuxinator::Config.exists?(name: name)
        Tmuxinator::Cli.new.start(name, *args.drop(1))
      else
        Tmuxinator::Cli.start(args)
      end
    end
  end
end

    
      describe '#start(with project config file)' do
    before do
      allow(Tmuxinator::Config).to receive(:validate).and_call_original
      allow(Tmuxinator::Config).to receive_messages(version: 1.9)
      allow(Kernel).to receive(:exec)
    end
    
          # Existant directories which may contain project files
      # Listed in search order
      # Used by `implode` and `list` commands
      def directories
        if environment?
          [environment]
        else
          [xdg, home].select { |d| File.directory? d }
        end
      end
    
        it 'gets a sorted list of all projects' do
      allow(described_class).to receive(:environment?).and_return false
    
          it { is_expected.to be false }
    end