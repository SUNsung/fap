
        
        class User < ActiveRecord::Base
  devise :database_authenticatable
end
    
            def_node_search :conditional_dependencies, <<~EOS
          {$(if (send (send nil? :build) ${:include? :with? :without?} $(str _))
              (send nil? :depends_on $({str sym} _)) nil?)
    }
    
              unless method_called_ever?(body_node, :go_resource)
            # processed_source.ast is passed instead of body_node because `require` would be outside body_node
            find_method_with_args(processed_source.ast, :require, 'language/go') do
              problem 'require \'language/go\' is unnecessary unless using `go_resource`s'
            end
          end
    
        depends_on(deps) if add_mac_dependency?(args)
  end
    
    require 'software_spec'
    
        checksums.each_pair do |cat, digest|
      checksum, = subject.checksum_for(cat)
      expect(Checksum.new(:sha256, digest)).to eq(checksum)
    end
  end
    
        let(:url) { Object.new }
    let(:strategy) { nil }
    
      it_behaves_like 'a command that requires a Cask token'
  it_behaves_like 'a command that handles invalid options'
    
      // writing
  $('form').on('submit',function(e) {
    $.post('/', {msg: '<%= user %>: ' + $('#msg').val()});
    $('#msg').val(''); $('#msg').focus();
    e.preventDefault();
  });
</script>
    
          def encode_token(token)
        Base64.strict_encode64(token)
      end
    
          def initialize(*)
        super
    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end
