
        
        def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
          #
    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
        context 'without a specific plugin' do
      it 'display a list of plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?