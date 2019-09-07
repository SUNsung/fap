
        
            included do
      ##
      # :singleton-method:
      # Indicates the format used to generate the timestamp in the cache key, if
      # versioning is off. Accepts any of the symbols in <tt>Time::DATE_FORMATS</tt>.
      #
      # This is +:usec+, by default.
      class_attribute :cache_timestamp_format, instance_writer: false, default: :usec
    
          def instrumenter_for(notifier)
        @registry[notifier] ||= Instrumenter.new(notifier)
      end
    end
    
            attr_reader :symbol
    
    module AbstractController
  module Testing
    class ControllerWithHelpers < AbstractController::Base
      include AbstractController::Helpers
      include AbstractController::Rendering
      include ActionView::Rendering
    
        loose_cooked = PrettyText.cook(md)
    
          ensure_cors!
      presigned_url(obj, :put, UPLOAD_URL_EXPIRES_AFTER_SECONDS)
    rescue Aws::Errors::ServiceError => e
      Rails.logger.warn('Failed to generate upload URL for S3: #{e.message.presence || e.class.name}')
      raise StorageError
    end
    
            # no optimisation possible without losing details
        expect(upload.filesize).to eq(9558)
    
          expect(rules.length).to eq(2)
      expect(rules[1]['Expiration']['Days']).to eq('100')
      # fixes the bad filter
      expect(rules[0]['Filter']['Prefix']).to eq('projectdocs/')
    end.to_return(status: 200, body: '', headers: {})
    
      results = +''
    
              it 'creates missing tags if some exist' do
            Fabricate(:tag, name: 'totally')
            expect {
              @result = subject.revise!(user, raw: 'lets totally update the body', tags: ['totally', 'update'])
            }.to change { Tag.count }.by(1)
            expect(@result).to eq(true)
            post.reload
            expect(post.topic.tags.map(&:name).sort).to eq(['totally', 'update'])
          end
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
          allow(driver_obj).to receive(:inspect_container).and_return(empty_network_settings)
    
    require 'log4r'
    
      def new_machine(options)
    double('machine').tap do |m|
      allow(m).to receive(:provider_name).and_return(provider_name)
      allow(m).to receive(:provider_options).and_return(options)
      allow(m).to receive(:action) do |action, opts|
        lock.synchronize do
          called_actions << [m, action, opts]
        end
      end
    end
  end
    
        # This is a custom Gem::Resolver::Set for use with Vagrant plugins. It is
    # a modified Gem::Resolver::VendorSet that supports multiple versions of
    # a specific gem
    class PluginSet < Gem::Resolver::VendorSet
      ##
      # Adds a specification to the set with the given +name+ which has been
      # unpacked into the given +directory+.
      def add_vendor_gem(name, directory)
        gemspec = File.join(directory, '#{name}.gemspec')
        spec = Gem::Specification.load(gemspec)
        if !spec
          raise Gem::GemNotFoundException,
            'unable to find #{gemspec} for gem #{name}'
        end
    
    module VagrantPlugins
  module CommandGlobalStatus
    class Command < Vagrant.plugin('2', :command)
      def self.synopsis
        'outputs status Vagrant environments for this user'
      end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          def roles_array
        roles.to_a
      end
    
        def URIEncodeOctets(octets, result, index)
      if (@@hexCharCodeArray == 0)
        @@hexCharCodeArray = [48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
                              65, 66, 67, 68, 69, 70];
      end
      index = URIAddEncodedOctetToBuffer(octets[0], result, index);
      if (octets[1]);
        index = URIAddEncodedOctetToBuffer(octets[1], result, index)
      end
      if (octets[2]);
        index = URIAddEncodedOctetToBuffer(octets[2], result, index)
      end
      if (octets[3]);
        index = URIAddEncodedOctetToBuffer(octets[3], result, index)
      end
      return index;
    end
    
      test 'missing emoji' do
    get '/emoji/oggy_was_here'
    assert_equal 404, last_response.status
  end
    
        def not_found(msg = nil)
      @message = msg || 'The requested page does not exist.'
      status 404
      return mustache :error
    end
    
        def _send_keys(t, e)
      '#{project.tmux} send-keys -t #{t} #{e} C-m'
    end
  end
end

    
      describe '::load' do
    let(:path) { File.expand_path('../../../fixtures/sample.yml', __FILE__) }
    let(:options) { {} }
    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end
    
        COMMANDS = {
      commands: 'Lists commands available in tmuxinator',
      completions: 'Used for shell completion',
      new: 'Create a new project file and open it in your editor',
      edit: 'Alias of new',
      open: 'Alias of new',
      start: %w{
        Start a tmux session using a project's name (with an optional [ALIAS]
        for project reuse) or a path to a project config file (via the -p flag)
      }.join(' '),
      stop: 'Stop a tmux session using a project's tmuxinator config',
      local: 'Start a tmux session using ./.tmuxinator.yml',
      debug: 'Output the shell commands that are generated by tmuxinator',
      copy: %w{
        Copy an existing project to a new project and
        open it in your editor
      }.join(' '),
      delete: 'Deletes given project',
      implode: 'Deletes all tmuxinator projects',
      version: 'Display installed tmuxinator version',
      doctor: 'Look for problems in your configuration',
      list: 'Lists all tmuxinator projects'
    }.freeze
    
        context 'environment variable $TMUXINATOR_CONFIG is nil' do
      it 'is an empty string' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return nil
        # allow(XDG).to receive(:[]).with('CONFIG').and_return nil
        allow(File).to receive(:directory?).and_return true
        expect(described_class.environment).to eq ''
      end
    end
    
    describe Tmuxinator::Doctor do
  describe '.installed?' do
    context 'tmux is installed' do
      before do
        allow(Kernel).to receive(:system) { true }
      end