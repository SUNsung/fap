
        
                    -- Return the time part and the sequence part. OR appears
            -- faster here than addition, but they're equivalent:
            -- time_part has no trailing two bytes, and tail is only
            -- the last two bytes.
            RETURN time_part | tail;
          END
        $$ LANGUAGE plpgsql VOLATILE;
      SQL
    end
    
            expect(response).to have_http_status(:missing)
      end
    end
  end
end

    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
      describe 'GET #show' do
    it 'returns http success' do
      get :show
      expect(response).to have_http_status(:success)
    end
  end
    
        it 'denies requests with sneaky encoded session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.%73ession=SESSION_TOKEN'
      expect(last_response).not_to be_ok
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
    
    
  it 'should allow changing the protection mode to a string' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::FrameOptions, :frame_options => 'ALLOW-FROM foo'
      run DummyApp
    end
    
          post('/', {}, 'HTTP_REFERER' => 'http://example.com/foo', 'HTTP_HOST' => 'example.org')
      expect(last_response).to be_ok
    end
  end
end

    
      private
    # Use callbacks to share common setup or constraints between actions.
    def set_book
      @book = Book.find(params[:id])
    end
    
                lambda do |corrector|
              new_source = receiver.source + '.end_with?(' +
                           to_string_literal(regex_str) + ')'
              corrector.replace(node.source_range, new_source)
            end
          end
        end
      end
    end
  end
end

    
            def variables_in_node(node)
          if node.or_type?
            node.node_parts
                .flat_map { |node_part| variables_in_node(node_part) }
                .uniq
          else
            variables_in_simple_node(node)
          end
        end