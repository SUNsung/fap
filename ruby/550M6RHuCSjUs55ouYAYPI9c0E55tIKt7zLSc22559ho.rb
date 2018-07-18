
        
        # For this pull request, which changes Page#dir
# https://github.com/jekyll/jekyll/pull/4403
    
            def disconnect(websocket)
          @websockets.delete(websocket)
        end
    
          def month
        @obj.date.strftime('%m')
      end
    
        # --
    # NOTE: Pathutil#in_path? gets the realpath.
    # @param [<Anything>] entry the entry you want to validate.
    # Check if a path is outside of our given root.
    # --
    def symlink_outside_site_source?(entry)
      !Pathutil.new(entry).in_path?(
        site.in_source_dir
      )
    end
    
        def to_json
      JSON.generate(as_json)
    end
    
        def contains?(url, options = nil)
      !!subpath_to(url, options)
    end
    
    def codepoints_to_unicode(codepoints)
  if codepoints.include?(' ')
    codepoints.split(' ').map(&:hex).pack('U*')
  else
    [codepoints.hex].pack('U')
  end
end
    
          expect {
        DiasporaFederation.callbacks.trigger(:fetch_person_url_to, diaspora_id, '/path/on/pod')
      }.to raise_error DiasporaFederation::Discovery::DiscoveryError
    end
  end
    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end
    
            def repeated_condition?(previous, condition)
          previous.any? { |c| c.include?(condition) }
        end
      end
    end
  end
end

    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
            def on_send(node)
          return unless node.receiver && node.method?(:freeze) &&
                        immutable_literal?(node.receiver)