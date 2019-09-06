
        
                  find_every_method_call_by_name(body_node, :system).each do |method_node|
            # Skip Kibana: npm cache edge (see formula for more details)
            next if @formula_name =~ /^kibana(@\d[\d.]*)?$/
    
      it 'unless build.without? conditional' do
    expect_offense(<<~RUBY)
      class Foo < Formula
        desc 'foo'
        url 'https://brew.sh/foo-1.0.tgz'
        def post_install
          return unless build.without? 'bar'
                        ^^^^^^^^^^^^^^^^^^^^ Use if build.with? 'bar' instead of unless build.without? 'bar'
        end
      end
    RUBY
  end
    
    describe SoftwareSpec do
  subject(:spec) { described_class.new }
    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
        <div id='backtrace' class='condensed'>
      <h3>BACKTRACE</h3>
      <p><a href='#' id='expando'
            onclick='toggleBacktrace(); return false'>(expand)</a></p>
      <p id='nav'><strong>JUMP TO:</strong>
         <% unless bad_request?(exception) %>
            <a href='#get-info'>GET</a>
            <a href='#post-info'>POST</a>
         <% end %>
         <a href='#cookie-info'>COOKIES</a>
         <a href='#env-info'>ENV</a>
      </p>
      <div class='clear'></div>
    
          # Essentially the inverse of +mask_token+.
      def unmask_token(masked_token)
        # Split the token into the one-time pad and the encrypted
        # value and decrypt it
        token_length = masked_token.length / 2
        one_time_pad = masked_token[0...token_length]
        encrypted_token = masked_token[token_length..-1]
        xor_byte_strings(one_time_pad, encrypted_token)
      end
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
          get '/?95df8d9bf5237ad08df3115ee74dcb10'
      expect(body).to eq('hi')
    end
    
          insist { input.attributes[:snap_grade] } == 'test-grade'
    end
  end
end

    
      def set_default_prefix
    attributes[:prefix] = self.class.default_prefix
    attributes[:prefix_given?] = true
  end
    
        # Combine template and filelist; allow user to edit before proceeding
    File.open(manifest_fn, 'w') do |manifest|
      manifest.write metadata_template
      manifest.write pkg_generate
    end
    edit_file(manifest_fn) if attributes[:edit?]
    
    # This provides PHP PEAR package support.
#
# This provides input support, but not output support.
class FPM::Package::PEAR < FPM::Package
  option '--package-name-prefix', 'PREFIX',
    'Name prefix for pear package', :default => 'php-pear'