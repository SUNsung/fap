
        
        # Sample contents
WITHOUT_LIQUID = <<-TEXT.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. Etiam bibendum magna et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
            def start(opts)
          @thread = Thread.new do
            # Use epoll if the kernel supports it
            EM.epoll
            EM.run do
              EM.error_handler { |e| log_error(e) }
    
        def sha256(value)
      salt = Settings.attr_encrypted_db_key_base_truncated
      ::Digest::SHA256.base64digest('#{value}#{salt}')
    end
    
            raise ClaimInvalid, 'Missing required 'iat' claim' if options.valid_within && !@decoded['iat']
    
              if formula_tap == 'homebrew-core' && (depends_on?('veclibfort') || depends_on?('lapack'))
            problem 'Formulae should use OpenBLAS as the default serial linear algebra library.'
          end
    
    module Utils
  class Bottles
    class << self
      undef tag
    
        depends_on(deps) if add_mac_dependency?(args)
  end
    
          expect(f.class.stable.deps.first.name).to eq('foo')
      expect(f.class.devel.deps.first.name).to eq('foo')
      expect(f.class.head.deps.first.name).to eq('foo')
    end
  end
end

    
          allow(OS).to receive(:mac?).and_return(true)
      allow(OS::Mac).to receive(:version).and_return(OS::Mac::Version.new(sierra_os_version))
    end
    
        it 'raises an error when accessing missing resources' do
      subject.owner = owner
      expect {
        subject.resource('foo')
      }.to raise_error(ResourceMissingError)
    end
  end
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
          # Homebrew Cask metadata
      if @cask.metadata_versioned_path.directory?
        @cask.metadata_versioned_path.children.each do |subdir|
          gain_permissions_remove(subdir)
        end
    
    
    
    protected
    
        case res.code
    when 201
      print_good('Playing https://www.youtube.com/watch?v=#{vid}')
    when 200
      print_status('Stopping video')
    when 404
      print_error('Target no longer supports casting via the DIAL protocol. ' \
                  'CASTV2 is not supported by this module at this time.')
    end
  end
    
      def parse(reader)
    # PDF
    # print_status 'PDF Version: #{reader.pdf_version}'
    # print_status 'PDF Title: #{reader.info['title']}'
    # print_status 'PDF Info: #{reader.info}'
    # print_status 'PDF Metadata: #{reader.metadata}'
    # print_status 'PDF Pages: #{reader.page_count}'
    
      def initialize(info = {})
    super(update_info(
              info,
              'Name' => 'Allegro Software RomPager 'Misfortune Cookie' (CVE-2014-9222) Authentication Bypass',
              'Description' => %q(
        This module exploits HTTP servers that appear to be vulnerable to the
        'Misfortune Cookie' vulnerability which affects Allegro Software
        Rompager versions before 4.34 and can allow attackers to authenticate
        to the HTTP service as an administrator without providing valid
        credentials.
      ),
              'Author' => [
                  'Jon Hart <jon_hart[at]rapid7.com>', # metasploit scanner module
                  'Jan Trencansky <jan.trencansky[at]gmail.com>', # metasploit auxiliary admin module
                  'Lior Oppenheim' # CVE-2014-9222
              ],
              'References' => [
                  ['CVE', '2014-9222'],
                  ['URL', 'http://mis.fortunecook.ie'],
                  ['URL', 'http://mis.fortunecook.ie/misfortune-cookie-suspected-vulnerable.pdf'], # list of likely vulnerable devices
                  ['URL', 'http://mis.fortunecook.ie/too-many-cooks-exploiting-tr069_tal-oppenheim_31c3.pdf'] # 31C3 presentation with POC
              ],
              'DisclosureDate' => 'Dec 17 2014',
              'License' => MSF_LICENSE
          ))
    
        print_status('Sending Jenkins and Groovy go-go-gadgets')
    send_request_cgi(
      'method'   => 'GET',
      'uri'      => go_go_gadget1,
      'vars_get' => vars_get
    )
  end
    
          ])
    
        for line in config_lines
      line.chomp
      line_num += 1
      if line_num == 8
        enc_password = Rex::Text.decode_base64(line)
        password = decrypt_password(enc_password)
      elsif line_num == 12
        if line.match(/<(.*)>.(.*)/)
          # Parse for output
          url = $1
          realm = $2
          realm.gsub! '\r', ''   #Remove \r (not common)
          if line.match(/<(.*):\/\/(.*):(.*)>/)
            # Parse for reporting
            sname = $1
            host = $2
            portnum = $3
            portnum.gsub! '\r', ''   #Remove \r (not common)
          end
        else
          url = '<Unknown/Error>'
        end
      elsif line_num == 16
        user_name = line
        user_name.gsub! '\r', ''  #Remove \r (not common)
      end
    end
    config.close
    
        # Check for result
    begin
      size = session.fs.file.stat(net_com_opts[:target].gsub('\\', '\\\\')).size
      print_good 'File #{net_com_opts[:target].gsub('\\', '\\\\')} found, #{size}kb'
    rescue
      print_error 'File #{net_com_opts[:target].gsub('\\', '\\\\')} not found,' \
                  ' NET CLR version #{datastore['NET_CLR_VER']} possibly not available'
      return
    end
    
    task :gemspec => 'rack-protection.gemspec'
task :default => :spec
task :test    => :spec

    
            if @javascript and not @escaper.respond_to? :escape_javascript
          fail('Use EscapeUtils for JavaScript escaping.')
        end
      end
    
            reaction
      end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end
    
          # Try to add the gems to the current gemfile and lock file, if successful
      # both of them will be updated. This injector is similar to Bundler's own injector class
      # minus the support for additionals source and doing local resolution only.
      ::Bundler::LogstashInjector.inject!(pack)
    
        puts('Updating #{filtered_plugins.collect(&:name).join(', ')}') unless filtered_plugins.empty?
    
      describe 'on #{logstash.hostname}' do
    context 'with a direct internet connection' do
      context 'when the plugin exist' do
        context 'from a local `.GEM` file' do
          let(:gem_name) { 'logstash-filter-qatest-0.1.1.gem' }
          let(:gem_path_on_vagrant) { '/tmp/#{gem_name}' }
          before(:each) do
            logstash.download('https://rubygems.org/gems/#{gem_name}', gem_path_on_vagrant)
          end
    
      describe 'bulk' do
    after do
      Sidekiq::Queue.new.clear
    end
    it 'can push a large set of jobs at once' do
      jids = Sidekiq::Client.push_bulk('class' => QueuedWorker, 'args' => (1..1_000).to_a.map { |x| Array(x) })
      assert_equal 1_000, jids.size
    end
    it 'can push a large set of jobs at once using a String class' do
      jids = Sidekiq::Client.push_bulk('class' => 'QueuedWorker', 'args' => (1..1_000).to_a.map { |x| Array(x) })
      assert_equal 1_000, jids.size
    end
    it 'returns the jids for the jobs' do
      Sidekiq::Client.push_bulk('class' => 'QueuedWorker', 'args' => (1..2).to_a.map { |x| Array(x) }).each do |jid|
        assert_match(/[0-9a-f]{12}/, jid)
      end
    end
    it 'handles no jobs' do
      result = Sidekiq::Client.push_bulk('class' => 'QueuedWorker', 'args' => [])
      assert_equal 0, result.size
    end
  end
    
        it 'can start and stop' do
      f = Sidekiq::Processor.new(Mgr.new)
      f.terminate
    end
    
      def options
    { :concurrency => 3, :queues => ['default'] }
  end
    
          refute Sidekiq::Testing.enabled?
      refute Sidekiq::Testing.fake?
    end
    
        def self.register_private_key(email_address)
      registration = client.new_account(:contact => 'mailto:#{email_address}', :terms_of_service_agreed => true)
      logger.info 'Successfully registered private key with address #{email_address}'
      true
    end
    
      def check_mx_records
    result = resolver.getresources(self.name, Resolv::DNS::Resource::IN::MX)
    records = result.map(&:exchange)
    if records.empty?
      self.mx_status = 'Missing'
      self.mx_error = 'There are no MX records for #{self.name}'
    else
      missing_records = Postal.config.dns.mx_records.dup - records.map { |r| r.to_s.downcase }
      if missing_records.empty?
        self.mx_status = 'OK'
        self.mx_error = nil
      elsif missing_records.size == Postal.config.dns.mx_records.size
        self.mx_status = 'Missing'
        self.mx_error = 'You have MX records but none of them point to us.'
      else
        self.mx_status = 'Invalid'
        self.mx_error = 'MX #{missing_records.size == 1 ? 'record' : 'records'} for #{missing_records.to_sentence} are missing and are required.'
      end
    end
  end
    
    end

    
      def suspend
    @server.suspend(params[:reason])
    redirect_to_with_json [organization, @server], :notice => 'Server has been suspended'
  end
    
      def update
    if @smtp_endpoint.update(safe_params)
      redirect_to_with_json [organization, @server, :smtp_endpoints]
    else
      render_form_errors 'edit', @smtp_endpoint
    end
  end
    
      def create
    @webhook = @server.webhooks.build(safe_params)
    if @webhook.save
      redirect_to_with_json [organization, @server, :webhooks]
    else
      render_form_errors 'new', @webhook
    end
  end