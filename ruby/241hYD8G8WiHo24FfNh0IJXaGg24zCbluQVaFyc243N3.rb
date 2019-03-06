
        
        module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
    DEPRECATION
    
        def bubble_subject(root)
      root.children.each do |child|
        bubble_subject(child) if child.is_a?(Tree::RuleNode) || child.is_a?(Tree::DirectiveNode)
        next unless child.is_a?(Tree::RuleNode) && !child.children.empty?
        next unless child.children.all? do |c|
          next unless c.is_a?(Tree::RuleNode)
          first_simple_sel(c).is_a?(Sass::Selector::Parent) && first_sseq(c).subject?
        end
        first_sseq(child).subject = true
        child.children.each {|c| first_sseq(c).subject = false}
      end
    end
    
        # Wraps the given string in terminal escapes
    # causing it to have the given color.
    # If terminal escapes aren't supported on this platform,
    # just returns the string instead.
    #
    # @param color [Symbol] The name of the color to use.
    #   Can be `:red`, `:green`, or `:yellow`.
    # @param str [String] The string to wrap in the given color.
    # @return [String] The wrapped string.
    def color(color, str)
      raise '[BUG] Unrecognized color #{color}' unless COLORS[color]
    
            # JRuby chokes when trying to import files from JARs when the path starts with './'.
        ret.map {|f, s| [f.sub(%r{^\./}, ''), s]}
      end
    
    def red(string)
  '\033[0;31m#{string}\e[0m'
end

    
        # From asking people, it seems MacPorts does not have a `prefix` command, like
    # Homebrew does, so make an educated guess:
    if port_prefix = prefix_from_bin('port')
      prefixes << port_prefix
    end
    
      def delete_target_file?
    return true if overwrite?
    puts('File #{target_file} exist, do you want to overwrite it? (Y/N)')
    ( 'y' == STDIN.gets.strip.downcase ? true : false)
  end
    
          it 'returns true if the pipeline is a system pipeline' do
        expect(subject.system?).to be_truthy
      end
    end
    
          context 'when the plugin doesnt exist' do
        it 'fails to install and report an error' do
          command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify logstash-output-impossible-plugin')
          expect(command.stderr).to match(/Plugin not found, aborting/)
        end
      end
    end
  end
end

    
      describe 'listing orders' do
    it 'lists existing orders' do
      within_row(1) do
        expect(column_text(2)).to eq 'R100'
        expect(find('td:nth-child(3)')).to have_css '.badge-considered_risky'
        expect(column_text(4)).to eq 'cart'
      end
    
                within_row(1) { click_icon 'split' }
            targetted_select2 @shipment2.number, from: '#s2id_item_stock_location'
            fill_in 'item_quantity', with: 1
            click_icon :save
    
          within_row(2) { click_icon :split }
      targetted_select2 'LA(#{order.reload.shipments.last.number})', from: '#s2id_item_stock_location'
      click_icon :save
      wait_for_ajax
      expect(page.find('#shipment_#{order.reload.shipments.last.id}')).to be_present
    end
  end
end

    
          flash.each do |msg_type, text|
        concat(content_tag(:div, text, class: 'alert alert-#{msg_type}')) unless ignore_types.include?(msg_type)
      end
      nil
    end
    
          # users should be able to set price when importing orders via api
      def permitted_line_item_attributes
        if @current_user_roles.include?('admin')
          super + [:price, :variant_id, :sku]
        else
          super
        end
      end
    
            def line_item_params
          params.require(:line_item).permit(:quantity, :variant_id, options: line_item_options)
        end
      end
    end
  end
end
