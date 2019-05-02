
        
          #
  # More advanced [] that does downcase comparison.
  #
  def [](key)
    begin
      rv = self.fetch(key)
    rescue IndexError
      rv = nil
    end
    if (rv == nil)
      begin
        rv = self.dcase_hash[key.downcase]
      rescue IndexError
        rv = nil
      end
    end
    
      #
  # Split the URI into the resource being requested and its query string.
  #
  def update_uri_parts
    # If it has a query string, get the parts.
    if ((self.raw_uri) and (md = self.raw_uri.match(/(.+?)\?(.*)$/)))
      self.uri_parts['QueryString'] = parse_cgi_qstring(md[2])
      self.uri_parts['Resource']    = md[1]
    # Otherwise, just assume that the URI is equal to the resource being
    # requested.
    else
      self.uri_parts['QueryString'] = {}
      self.uri_parts['Resource']    = self.raw_uri
    end
    
                encoded
          end
    
              private
    
                seq = OpenSSL::ASN1::Sequence.new(seqs)
    
              # Decodes the start_time field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_start_time(input)
            input.value[0].value
          end
    
              # Decodes the etype from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_etype(input)
            input.value[0].value.to_i
          end
    
              # Encodes the pa_data field
          #
          # @return [String]
          def encode_pa_data
            elems = []
            pa_data.each do |data|
              elems << data.encode
            end
    
              # Encodes the from
          #
          # @return [OpenSSL::ASN1::GeneralizedTime]
          def encode_from
            OpenSSL::ASN1::GeneralizedTime.new(from)
          end
    
              # Decodes the cname field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::PrincipalName]
          def decode_cname(input)
            Rex::Proto::Kerberos::Model::PrincipalName.decode(input.value[0])
          end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Then(/^the repo is cloned$/) do
  run_vagrant_command(test_dir_exists(TestApp.repo_path))
end
    
        require 'capistrano/scm/#{scm_name}'
    install_plugin #{built_in_scm_plugin_class_name}
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
      it 'returns the source' do
    expect(subject.source).to eq(source)
  end
    
    shared_examples 'logstash update' do |logstash|
  describe 'logstash-plugin update on #{logstash.hostname}' do
    before :each do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
            self
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end

    
      test 'change custom.css path if page-file-dir is set' do
    Precious::App.set(:wiki_options, { :css => true, :page_file_dir => 'docs'})
    page = 'docs/yaycustom'
    text = 'customized!'
    
        post '/edit/PG', :page => 'PG', :content => '바뀐 text', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
    # Set ruby to UTF-8 mode
# This is required for Ruby 1.8.7 which gollum still supports.
$KCODE = 'U' if RUBY_VERSION[0, 3] == '1.8'
    
      # Force all access to the app over SSL, use Strict-Transport-Security, and use secure cookies.
  # config.force_ssl = true