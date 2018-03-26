
        
        #
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        # Gets the name of this layout.
    attr_reader :name
    
          def measure_bytes
        yield.tap do |str|
          @renderer.increment_bytes(@filename, str.bytesize)
        end
      end
    
      def test_to_h
    h = @h.to_h
    assert_equal(@h, h)
    assert_instance_of(Hash, h)
  end
    
      class SubclassX < Struct
  end
    
      with_feature :fiber do
    it 'kills the entire thread when a fiber is active' do
      t = Thread.new do
        Fiber.new do
          sleep
        end.resume
        ScratchPad.record :fiber_resumed
      end
      Thread.pass while t.status and t.status != 'sleep'
      t.send(@method)
      t.join
      ScratchPad.recorded.should == nil
    end
  end
    
      # Converts an interpolation array to source.
  #
  # @param interp [Array<String, Sass::Script::Tree::Node>] The interpolation array to convert.
  # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
  # @return [String]
  def self._interp_to_src(interp, options)
    interp.map {|r| r.is_a?(String) ? r : r.to_sass(options)}.join
  end
end

    
            # Removes the specified cache
        #
        # @param [Array<Hash>] cache_descriptors
        #        An array of caches to remove, each specified with the same
        #        hash as cache_descriptors_per_pod especially :spec_file and :slug
        #
        def remove_caches(cache_descriptors)
          cache_descriptors.each do |desc|
            UI.message('Removing spec #{desc[:spec_file]} (v#{desc[:version]})') do
              FileUtils.rm(desc[:spec_file])
            end
            UI.message('Removing cache #{desc[:slug]}') do
              FileUtils.rm_rf(desc[:slug])
            end
          end
        end
    
            rows.each do |row|
          line = row.values.each_with_index.map do |value, col|
            value.to_s.ljust(col_widths[col])
          end.join(' ').rstrip
          line = color.colorize(line, row.color) if row.color
          puts line
        end
      end
    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end