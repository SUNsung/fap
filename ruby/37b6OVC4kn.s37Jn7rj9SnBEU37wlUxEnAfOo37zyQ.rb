
        
              it 'adds create_html param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            create_html: true
          )
        end').runner.execute(:test)
    
              it '--log-path option is present' do
            result = Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', log_path: 'bla.log')
              end').runner.execute(:test)
            expect(result).to eq('carthage update --log-path bla.log')
          end
        end
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
          it 'passes an environment Hash' do
        expect_command({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
        Fastlane::Actions.sh({ 'PATH' => '/usr/local/bin' }, 'git', 'commit')
      end
    
      # make sure local implementation is also used in shelljoin
  def shelljoin(array)
    array.map { |arg| shellescape(arg) }.join(' ')
  end
  module_function :shelljoin
end
    
        # Add any other standard response headers.
    server.add_response_headers(response)
    
    
# Codecs
IAX_CODEC_G711_MULAW  = 0x00000004
IAX_CODEC_G711_ALAW   = 0x00000008
IAX_CODEC_LINEAR_PCM  = 0x00000040
    
      #
  # Payload types were identified from xCAT-server source code (IPMI.pm)
  #
  PAYLOAD_IPMI = 0
  PAYLOAD_SOL  = 1
  PAYLOAD_RMCPPLUSOPEN_REQ = 0x10
  PAYLOAD_RMCPPLUSOPEN_REP = 0x11
  PAYLOAD_RAKP1 = 0x12
  PAYLOAD_RAKP2 = 0x13
  PAYLOAD_RAKP3 = 0x14
  PAYLOAD_RAKP4 = 0x15
    
              # Rex::Proto::Kerberos::Model::ApReq decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'AP-REQ decoding not supported'
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of a principal, an asset (e.g., a
        # workstation user or a network server) on a network.
        class Element
    
              # Decodes a Rex::Proto::Kerberos::Model::EncryptionKey
          #
          # @param input [String, OpenSSL::ASN1::Sequence] the input to decode from
          # @return [self] if decoding succeeds
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode(input)
            case input
            when String
              decode_string(input)
            when OpenSSL::ASN1::Sequence
              decode_asn1(input)
            else
              raise ::RuntimeError, 'Failed to decode EncryptionKey, invalid input'
            end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation for Kerberos pre authenticated
        # data
        class PreAuthData < Element
    
            select_tag(:per_page,
                   options_for_select(per_page_options, selected_option),
                   class: 'form-control pull-right js-per-page-select per-page-selected-#{selected_option}')
      end
    
            def option_types_params
          params[:product].fetch(:option_types, [])
        end
    
          @@address_attributes = [
        :id, :firstname, :lastname, :full_name, :address1, :address2, :city,
        :zipcode, :phone, :company, :alternative_phone, :country_id, :state_id,
        :state_name, :state_text
      ]
    
          get_web_content(redirected_url)
    end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end