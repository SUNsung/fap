
        
        class RenderersMetalTest < ActionController::TestCase
  tests MetalRenderingJsonController
    
        if options[:packaged]
      slugs = Dir[File.join(Docs.store_path, '*.tar.gz')].map { |f| File.basename(f, '.tar.gz') }
      docs = find_docs_by_slugs(slugs)
    else
      docs = find_docs(names)
    end
    
            css('section', 'code b', '.accordion', '.accordion-overflow', '.accordion-content').each do |node|
          node.before(node.children).remove
        end
    
    
      def get_name
        name ||= at_css('#inner h1').content
        name.remove! '» '
        name.remove! 'Data Source: '
        name
      end
    
        attr_reader :request_options
    
    module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
            # Remove code highlighting
        css('pre').each do |node|
          node.content = node.content
          node['data-language'] = 'c' if node['class'] == 'c'
          node['data-language'] = 'ruby' if node['class'] && node['class'].include?('ruby')
        end
      end
    end
  end
end

    
            css('hr', '.content-header', 'button', '.docs-alert').remove
    
            css('#synopsis > details > ul > li').each_with_object [] do |node, entries|
          link = node.at_css('a')
          name = node.content.strip
          name.remove! %r{\A(?:module|data|newtype|class|type family m|type)\s+}
          name.sub! %r{\A\((.+?)\)}, '\1'
          name.sub!(/ (?:\:\: (\w+))?.*\z/) { |_| $1 ? ' (#{$1})' : '' }
    
              # Classes
          if name.gsub! 'Class: ', ''
            name.remove! 'events.' # EventEmitter
            klass = name
            entries << [name, node['id']]
            next
          end
    
        xml.add_element(
      'soap:Envelope',
      {'xmlns:soap'  => 'http://www.w3.org/2003/05/soap-envelope'}
    )
    
    
    {      if in_super and line =~ /['']References[''][[:space:]]*=>/
        in_refs = true
      elsif in_super and in_refs and line =~ /^[[:space:]]+\],*/m
        in_refs = false
      elsif in_super and line =~ /['']Notes[''][[:space:]]*=>/
        in_notes = true
      elsif in_super and in_notes and line =~ /^[[:space:]]+\},*/m
        break
      elsif in_super and in_refs and line =~ /[^#]+\[[[:space:]]*[''](.+)[''][[:space:]]*,[[:space:]]*[''](.+)[''][[:space:]]*\]/
        identifier = $1.strip.upcase
        value      = $2.strip
    
      #
  # Constructs the payload
  #
  def generate
    return super + command_string
  end
    
      # Provides the uri of the redirection location.
  #
  # @return [URI] the uri of the redirection location.
  # @return [nil] if the response hasn't a Location header or it isn't a valid uri.
  def redirection
    begin
      URI(headers['Location'])
    rescue ::URI::InvalidURIError
      nil
    end
  end
    
      def decode_audio_frame(buff)
    case self.codec
    
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
    
            end
      end
    end
  end
end
    
              # Encodes the Rex::Proto::Kerberos::Model::ApReq into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_pvno], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_msg_type], 1, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_options], 2, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_ticket], 3, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_authenticator], 4, :CONTEXT_SPECIFIC)
            seq = OpenSSL::ASN1::Sequence.new(elems)
    
          @func = Fiddle::Function.new(handle[func], import, export, calltype)
    rescue Fiddle::DLError => e
      raise LoadError, e.message, e.backtrace
    end
    
        assert_in_delta (3.165778513216168+1.959601041421606i),     CMath.sin(1+2i)
    assert_in_delta (2.0327230070196656-3.0518977991517997i),   CMath.cos(1+2i)
    assert_in_delta (0.033812826079896774+1.0147936161466338i), CMath.tan(1+2i)
    assert_in_delta (-0.4890562590412937+1.4031192506220405i),  CMath.sinh(1+2i)
    assert_in_delta (-0.64214812471552+1.0686074213827783i),    CMath.cosh(1+2i)
    assert_in_delta (1.16673625724092-0.2434582011857252i),     CMath.tanh(1+2i)
    assert_in_delta (0.4270785863924755+1.5285709194809978i),   CMath.asin(1+2i)
    assert_in_delta (1.1437177404024204-1.528570919480998i),    CMath.acos(1+2i)
    assert_in_delta (1.3389725222944935+0.4023594781085251i),   CMath.atan(1+2i)
    assert_in_delta (1.4693517443681852+1.0634400235777521i),   CMath.asinh(1+2i)
    assert_in_delta (1.528570919480998+1.1437177404024204i),    CMath.acosh(1+2i)
    assert_in_delta (0.17328679513998635+1.1780972450961724i),  CMath.atanh(1+2i)
    
    describe 'GzipReader#eof?' do
    
        it 'returns a hash with the flare tag's text_color_hex' do
      expect(described_class.new(valid_article).tag_hash.value?('#cccccc')).to be true
    end
  end
end

    
      it 'renders a user's story successfully' do
    expect(get: '/ben/this-is-a-slug').to route_to(
      controller: 'stories',
      action: 'show',
      slug: 'this-is-a-slug',
      username: 'ben',
    )
  end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
            it 'deletes the project' do
          expect(FileUtils).to receive(:rm)
          capture_io { cli.start }
        end
      end
    
        context 'when a project config file is provided' do
      it 'should raise if the project config file can't be found' do
        project_config = 'dont-exist.yml'
        regex = /Project config \(#{project_config}\) doesn't exist\./
        expect do
          described_class.validate(project_config: project_config)
        end.to raise_error RuntimeError, regex
      end
    
        context 'root not set' do
      let(:root?) { false }
      let(:root) { nil }