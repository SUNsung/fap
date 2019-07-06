
        
          attr_accessor :relevances
  def relevances_attributes=(attributes); end
end
    
        when IAX_TYPE_CONTROL
      case stype
      when IAX_CTRL_HANGUP
        dprint('HANGUP')
        self.client.send_ack(self)
        self.state = :hangup
    
              # Encodes the renew_time field
          #
          # @return [String]
          def encode_renew_time
            [renew_till].pack('N')
          end
    
              # Decodes the key from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [EncryptionKey]
          def decode_key(input)
            Rex::Proto::Kerberos::Model::EncryptionKey.decode(input.value[0])
          end
    
        def zero?() false end
    def finite?() false end
    def infinite?() d.nonzero? end
    def nan?() d.zero? end
    
        def inspect # :nodoc:
      '#<%s:%d %s>' % [self.class.name, @bitlen, hexdigest]
    end
  end
end

    
    # for https://github.com/ruby/etc
srcdir = File.expand_path('..', __FILE__)
if !File.exist?('#{srcdir}/depend')
  %x[#{RbConfig.ruby} #{srcdir}/mkconstants.rb -o #{srcdir}/constdefs.h]
end
    
      default_value = nil if default_value == 'nil'
    
      # Sets the last +Error+ of the current executing +Thread+ to +error+
  def self.last_error= error
    Thread.current[:__DL2_LAST_ERROR__] = error
    Thread.current[:__FIDDLE_LAST_ERROR__] = error
  end
    
          def lines
        lines = []
        @diff.diff.split('\n')[2..-1].each_with_index do |line, line_index|
          lines << { :line  => line,
                     :class => line_class(line),
                     :ldln  => left_diff_line_number(0, line),
                     :rdln  => right_diff_line_number(0, line) }
        end if @diff
        lines
      end
    
          def next_link
        label = 'Next &raquo;'
        if @versions.size == Gollum::Page.per_page
          link = '/history/#{@page.name}?page=#{@page_num+1}'
          %(<a href='#{link}' hotkey='l'>#{label}</a>)
        else
          %(<span class='disabled'>#{label}</span>)
        end
      end
    end
  end
end

    
      test 'h1 title can be disabled' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
        class MapGollum
      def initialize(base_path)
        @mg = Rack::Builder.new do
          
          map '/#{base_path}' do
            run Precious::App
          end
          map '/' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          map '/*' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          
        end
      end
    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end

    
          def main_sidebar_classes
        if cookies['sidebar-minimized'] == 'true'
          'col-3 col-md-2 sidebar'
        else
          'p-0 col-3 col-md-2 sidebar'
        end
      end
    
            def show
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          headers['Surrogate-Key'] = 'product_id=1'
          respond_with(@product)
        end