
        
          def relative_url_redirect_with_status_hash
    redirect_to('/things/stuff', status: 301)
  end
    
              # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
            # Internal hax = :(
        client = connection.websocket.send(:websocket)
        rack_hijack_io = client.instance_variable_get('@stream').instance_variable_get('@rack_hijack_io')
        rack_hijack_io.stub(:write, proc { raise(closed_exception, 'foo') }) do
          assert_called(client, :client_gone) do
            client.write('boo')
          end
        end
        assert_equal [], connection.errors
      end
    end
  end
    
      # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!
    
              if File.extname(file) == '.rb'
            tree[subtree] ||= []
            tree[subtree] << file
          end
        end
      end
    
    class Formula
  include FormulaCompat
  extend FormulaCompat
    
      # Use this method to generate standard caveats.
  def standard_instructions(home_name, home_value = libexec)
    <<-EOS.undent
      Before you can use these tools you must export some variables to your $SHELL.
    
        options[:attribution] = <<-HTML
      &copy; 2009&ndash;2018 Jeremy Ashkenas<br>
      Licensed under the MIT License.
    HTML
    
        self.name = 'Elixir'
    self.type = 'elixir'
    self.root_path = 'api-reference.html'
    self.links = {
      home: 'https://elixir-lang.org/',
      code: 'https://github.com/elixir-lang/elixir'
    }
    
        # Downloaded from php.net/download-docs.php
    self.dir = '/Users/Thibaut/DevDocs/Docs/PHP'
    
        options[:attribution] = <<-HTML
      &copy; 2018 The TensorFlow Authors. All rights reserved.<br>
      Licensed under the Creative Commons Attribution License 3.0.<br>
      Code samples licensed under the Apache 2.0 License.
    HTML
    
            css('h2:not([id]) a[id]:not([href])').each do |node|
          node.parent['id'] = node['id']
          node.before(node.children).remove
        end
    
      def participation_count
    poll_answers.sum('vote_count')
  end
end

    
          def handle_confirmation_endpoint_response(endpoint)
        _status, header, _response = endpoint.call(request.env)
        delete_authorization_session_variables
        redirect_to header['Location']
      end
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address