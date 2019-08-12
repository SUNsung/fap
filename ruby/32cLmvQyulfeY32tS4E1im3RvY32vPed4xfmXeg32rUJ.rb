
        
                # Setup and normalize the configuration:
        #   * Create Kramdown if it doesn't exist.
        #   * Set syntax_highlighter, detecting enable_coderay and merging
        #       highlighter if none.
        #   * Merge kramdown[coderay] into syntax_highlighter_opts stripping coderay_.
        #   * Make sure `syntax_highlighter_opts` exists.
    
          def after_feature_element(feature_element)
        @timings[feature_element_timing_key(feature_element)] = Time.now - @timings[feature_element_timing_key(feature_element)]
        @io.print ' (#{@timings[feature_element_timing_key(feature_element)]}s)'
      end
    
            def handle_websockets_event(websocket)
          websocket.onopen { |handshake| connect(websocket, handshake) }
          websocket.onclose { disconnect(websocket) }
          websocket.onmessage { |msg| print_message(msg) }
          websocket.onerror { |error| log_error(error) }
        end
    
            a_split.each_with_index { |s, i| a_split[i] = s.to_i unless i == a_length - 1 }
        b_split.each_with_index { |s, i| b_split[i] = s.to_i unless i == b_length - 1 }
    
        def links
      context[:links]
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
            css('h1 + code').each do |node|
          node.before('<p></p>')
          while node.next_element.name == 'code'
            node.previous_element << ' '
            node.previous_element << node.next_element
          end
          node.previous_element.prepend_child(node)
        end
    
            css('span.badges').each do |node|
          node.name = 'div'
        end
    
          # Generates the contents of the module.modulemap file.
      #
      # @return [String]
      #
      def generate
        <<-MODULE_MAP.strip_heredoc
#{module_specifier_prefix}module #{target.product_module_name}#{module_declaration_attributes} {
  #{headers.join('\n  ')}
    }
    
              merged = @target.merge_embedded_pod_targets(embedded_pod_targets_for_build_configuration)
          merged.pod_targets_for_build_configuration('Debug').should == [@pod_target]
          merged.pod_targets_for_build_configuration('Release').should == [@pod_target, other_pod_target]
        end
    
          def ==(other)
        if other.class == self.class
          other.source_path == @source_path && other.dsym_path == @dsym_path && other.bcsymbolmap_paths == @bcsymbolmap_paths
        else
          false
        end
      end
    
          def updates
        @updates ||= begin
          ensure_external_podspecs_present!
          spec_sets.map do |set|
            spec = set.specification
            source_version = set.versions.first
            pod_name = spec.root.name
            lockfile_version = lockfile.version(pod_name)
            if source_version > lockfile_version
              matching_spec = unlocked_pods.find { |s| s.name == pod_name }
              matching_version =
                matching_spec ? matching_spec.version : '(unused)'
              [pod_name, lockfile_version, matching_version, source_version]
            end
          end.compact.uniq
        end
      end
    
            # Displays the state of each pod.
        #
        # @return [void]
        #
        def print
          states = %i(added deleted changed unchanged)
          lines(states).each do |line|
            UI.message(line, '', 2)
          end
        end