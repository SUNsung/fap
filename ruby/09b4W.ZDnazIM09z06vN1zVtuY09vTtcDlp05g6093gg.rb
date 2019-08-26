
        
          # Constants which holds devise configuration for extensions. Those should
  # not be modified by the 'end user' (this is why they are constants).
  ALL         = []
  CONTROLLERS = {}
  ROUTES      = {}
  STRATEGIES  = {}
  URL_HELPERS = {}
    
      # GET /resource/confirmation?confirmation_token=abcdef
  def show
    self.resource = resource_class.confirm_by_token(params[:confirmation_token])
    yield resource if block_given?
    
      def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
          def remove_domain_from_uri(uri)
        [uri.path.sub(/\A\/+/, '/'), uri.query].compact.join('?')
      end
    
          def rsync_installed(machine)
        machine.communicate.test('which rsync')
      end
    
      describe '#rsync_post' do
    let(:opts) {{:type=>:rsync,
                 :guestpath=>'/vagrant',
                 :hostpath=>'/home/user/syncfolder',
                 :disabled=>false,
                 :__vagrantfile=>true,
                 :exclude=>['.vagrant'],
                 :owner=>'vagrant',
                 :group=>'vagrant'}}
    
        def new_entry(name, provider, version)
      Vagrant::MachineIndex::Entry.new.tap do |entry|
        entry.extra_data['box'] = {
          'name' => name,
          'provider' => provider,
          'version' => version,
        }
      end
    end
    
              # Create a temporary file to store the data so we can upload it.
          remote_file = File.join(guest_provisioning_path, 'dna.json')
          @machine.communicate.sudo(remove_command(remote_file), error_check: false)
          Tempfile.open('vagrant-chef-provisioner-config') do |f|
            f.binmode
            f.write(json)
            f.fsync
            f.close
            @machine.communicate.upload(f.path, remote_file)
          end
        end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    describe VagrantPlugins::Chef::Cap::Windows::ChefInstalled do
  include_context 'unit'
    
      describe '#machine_names' do
    it 'returns the default name when single-VM' do
      configure { |config| }
    
        # Initializes a new environment with the given options. The options
    # is a hash where the main available key is `cwd`, which defines where
    # the environment represents. There are other options available but
    # they shouldn't be used in general. If `cwd` is nil, then it defaults
    # to the `Dir.pwd` (which is the cwd of the executing process).
    def initialize(opts=nil)
      opts = {
        cwd:              nil,
        home_path:        nil,
        local_data_path:  nil,
        ui_class:         nil,
        vagrantfile_name: nil,
      }.merge(opts || {})
    
        it 'should set custom sources' do
      expect(subject).to receive(:internal_install) do |info, update, opts|
        expect(info[plugin_name]['sources']).to eq(sources)
      end
      subject.install_local(plugin_path, sources: sources)
    end
    
        context 'when container does not exist' do
      before { allow(subject).to receive(:execute)
        .and_return('foo\n#{cid}extra\nbar') }
      it { expect(result).to be_falsey }
    end
  end
    
              with_target_vms(argv, provider: provider) do |machine|
            if !machine.config.vm.box
              machine.ui.output(I18n.t(
                'vagrant.errors.box_update_no_name'))
              next
            end
    
          context 'boxes have an update' do
        let(:md) {
          md = Vagrant::BoxMetadata.new(StringIO.new(<<-RAW))
        {
          'name': 'foo',
          'versions': [
            {
              'version': '1.0'
            },
            {
              'version': '1.1',
              'providers': [
                {
                  'name': 'virtualbox',
                  'url': 'bar'
                }
              ]
            }
          ]
        }
          RAW
        }
    
    <script>
  // reading
  var es = new EventSource('/stream');
  es.onmessage = function(e) { $('#chat').append(e.data + '\n') };
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
      it 'accepts post form requests with masked authenticity_token field' do
    post('/', {'authenticity_token' => masked_token}, 'rack.session' => session)
    expect(last_response).to be_ok
  end
    
      it 'should ignore CSP3 no arg directives unless they are set to true' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => false, :disown_opener => 'false', :upgrade_insecure_requests => 'foo'
    
      context 'with custom session key' do
    it 'denies requests with duplicate session cookies' do
      mock_app do
        use Rack::Protection::CookieTossing, :session_key => '_session'
        run DummyApp
      end
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end
    
    
===============================================
 Error for category_generator.rb plugin
-----------------------------------------------
 No 'category_index.html' in source/_layouts/
 Perhaps you haven't installed a theme yet.
===============================================
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
    end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end