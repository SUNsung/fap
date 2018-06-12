
        
          </body>
</html>
HTML
    
            def init_with_program(prog)
          prog.command(:serve) do |cmd|
            cmd.description 'Serve your site locally'
            cmd.syntax 'serve [options]'
            cmd.alias :server
            cmd.alias :s
    
        # Checks if the layout specified in the document actually exists
    #
    # layout - the layout to check
    #
    # Returns true if the layout is invalid, false if otherwise
    def invalid_layout?(layout)
      !data['layout'].nil? && layout.nil? && !(is_a? Jekyll::Excerpt)
    end
    
        # Returns whether the document is a draft. This is only the case if
    # the document is in the 'posts' collection but in a different
    # directory than '_posts'.
    #
    # Returns whether the document is a draft.
    def draft?
      data['draft'] ||= relative_path.index(collection.relative_directory).nil? &&
        collection.label == 'posts'
    end
    
      describe '.create' do
    it 'creates a key with the client' do
      expected_service_configs = {
        'U27F4V844T' => [],
        'DQ8HTZ7739' => [],
        '6A7HVUVQ3M' => ['some-music-id']
      }
      mock_client_response(:create_key!, with: { name: 'New Key', service_configs: expected_service_configs }) do
        {
          keyId: 'a-new-key-id'
        }
      end
    
            expect(result).to eq(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::VERSION_NUMBER])
      end
    
        expect(corrected).to eq(''something'.to_sym')
  end
end

    
        status data.respond_to?(:status_code) ? data.status_code : 200
    
            #target = $LOADED_FEATURES.grep(/#{path}/).first
        #puts path
        #puts caller.map { |c| '  #{c}' }.join('\n')
        #fontsize = [10, duration * 48].max
        puts '#{duration},#{path},#{source}'
      end
      #puts caller.map { |c| ' => #{c}' }.join('\n')
    end