
        
          File.unlink(out) if (File.size(out) == 0)
    
    
    
    
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end
    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
          def escape(object)
        case object
        when Hash   then escape_hash(object)
        when Array  then object.map { |o| escape(o) }
        when String then escape_string(object)
        when Tempfile then object
        else nil
        end
      end
    
          get '/', {}, 'HTTP_COOKIE' => '_session=EVIL_SESSION_TOKEN; _session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
  end
end

    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
        expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('DENY')
  end
    
    
  it 'should set the X-Content-Type-Options for other content types' do
    expect(get('/', {}, 'wants' => 'application/foo').header['X-Content-Type-Options']).to eq('nosniff')
  end
    
      it 'should not interfere with normal head requests' do
    expect(head('/')).to be_ok
  end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
        def add_active_record_callbacks
      name = @name
      @klass.send(:after_save) { send(name).send(:save) }
      @klass.send(:before_destroy) { send(name).send(:queue_all_for_delete) }
      if @klass.respond_to?(:after_commit)
        @klass.send(:after_commit, on: :destroy) do
          send(name).send(:flush_deletes)
        end
      else
        @klass.send(:after_destroy) { send(name).send(:flush_deletes) }
      end
    end
    
        module StrictDeclaration