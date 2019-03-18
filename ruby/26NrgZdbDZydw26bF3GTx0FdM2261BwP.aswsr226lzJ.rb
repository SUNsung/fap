
        
        desc 'Open an irb session preloaded with this library'
task :console do
  sh 'irb -rubygems -r ./lib/#{name}.rb'
end

    
    Jekyll::PluginManager.require_from_bundler
    
            def handle_websockets_event(websocket)
          websocket.onopen { |handshake| connect(websocket, handshake) }
          websocket.onclose { disconnect(websocket) }
          websocket.onmessage { |msg| print_message(msg) }
          websocket.onerror { |error| log_error(error) }
        end
    
                rows << {
              label_id: label_id,
              target_id: target_id,
              target_type: issue.issuable_type,
              created_at: time,
              updated_at: time
            }
          end
    
          # project - An instance of `Project`.
      # object - The object to look up or set a database ID for.
      def initialize(project, object)
        @project = project
        @object = object
      end
    
            waiter
      end
    
              user = Representation::User.from_api_response(note.user) if note.user
          hash = {
            noteable_type: 'MergeRequest',
            noteable_id: matches[:iid].to_i,
            file_path: note.path,
            commit_id: note.commit_id,
            diff_hunk: note.diff_hunk,
            author: user,
            note: note.body,
            created_at: note.created_at,
            updated_at: note.updated_at,
            github_id: note.id
          }
    
        def add(path, content)
      @pages[path] = content
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
          def initial_urls
        return super unless self.class.internal_urls
        @initial_urls ||= self.class.internal_urls.map(&method(:url_for)).freeze
      end
    
        def log(msg)
      puts '\r' + justify(msg)
    end
    
        it 'returns the last access time for the provided file when passed ?A' do
      Kernel.test(?A, @tmp_file).should == @tmp_file.atime
    end
    
        context 'opening brace on same line as first element' do
      it 'allows closing brace on same line from last element' do
        expect_no_offenses(construct(false, false))
      end
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
          private_constant :HashElementDelta
    end
  end
end

    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?
    
          def remove(klass)
        entries.delete_if { |entry| entry.klass == klass }
      end
    
        def request
      @request ||= ::Rack::Request.new(env)
    end