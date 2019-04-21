
        
                class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
                  [:year, :month, :day, :hour, :min, :sec].each do |key|
                default[key] ||= time.send(key)
              end
    
          def with_symbol
        render inline: 'I respond to bare_a: <%= respond_to?(:bare_a) %>'
      end
    end
    
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
  # Updates the command parts for this specific packet type.
  #
  def update_cmd_parts(str)
    if (md = str.match(/^(.+?)\s+(.+?)\s+HTTP\/(.+?)\r?\n?$/i))
      self.method  = md[1]
      self.raw_uri = URI.decode(md[2])
      self.proto   = md[3]
    
              case protocol
          when 'tcp'
            self.connection = create_tcp_connection
          when 'udp'
            raise ::NotImplementedError, 'Kerberos Client: UDP not supported'
          else
            raise ::RuntimeError, 'Kerberos Client: unknown transport protocol'
          end
    
    module Rex
  module Proto
    module Kerberos
      module CredentialCache
        # This class provides a representation of a Principal stored in the Kerberos Credential Cache.
        class Principal < Element
          # @!attribute name_type
          #   @return [Integer]
          attr_accessor :name_type
          # @!attribute realm
          #   @return [String]
          attr_accessor :realm
          # @!attribute components
          #   @return [Array<String>]
          attr_accessor :components
    
              def initialize(options = {})
            self.class.attributes.each do |attr|
              if options.has_key?(attr)
                m = (attr.to_s + '=').to_sym
                self.send(m, options[attr])
              end
            end
          end
    
              # Decodes the pa_data from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Array<Rex::Proto::Kerberos::Model::PreAuthData>]
          def decode_asn1_pa_data(input)
            pre_auth = []
            input.value[0].value.each do |pre_auth_data|
              pre_auth << Rex::Proto::Kerberos::Model::PreAuthData.decode(pre_auth_data)
            end
    
              # Decodes the enc_auth_data field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::EncryptedData]
          def decode_enc_auth_data(input)
            Rex::Proto::Kerberos::Model::EncryptedData.decode(input.value[0])
          end
        end
      end
    end
  end
end

    
              # Decodes the value from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Time]
          def decode_value(input)
            input.value[0].value
          end
        end
      end
    end
  end
end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^the current symlink points to that specific release$/) do
  specific_release_path = TestApp.releases_path.join(@rollback_release)
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        def is_question?(key)
      value = fetch_for(key, nil)
      !value.nil? && value.is_a?(Question)
    end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
    public_dir      = 'public'    # compiled site directory
source_dir      = 'source'    # source file directory
blog_index_dir  = 'source'    # directory for your blog's index page (if you put your index in source/blog/index.html, set this to 'source/blog')
deploy_dir      = '_deploy'   # deploy directory (for Github pages deployment)
stash_dir       = '_stash'    # directory to stash posts for speedy generation
posts_dir       = '_posts'    # directory for blog files
themes_dir      = '.themes'   # directory for blog files
new_post_ext    = 'markdown'  # default new post file extension when using the new_post task
new_page_ext    = 'markdown'  # default new page file extension when using the new_page task
server_port     = '4000'      # port for preview server eg. localhost:4000
    
    run SinatraStaticServer

    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end