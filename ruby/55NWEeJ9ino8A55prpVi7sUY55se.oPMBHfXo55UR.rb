
        
            assert_equal 'foo', output_buffer, 'javascript_tag without a block should not concat to output_buffer'
  end
    
            # Require the adapter itself and give useful feedback about
        #   1. Missing adapter gems and
        #   2. Adapter gems' missing dependencies.
        path_to_adapter = 'action_cable/subscription_adapter/#{adapter}'
        begin
          require path_to_adapter
        rescue LoadError => e
          # We couldn't require the adapter itself. Raise an exception that
          # points out config typos and missing gems.
          if e.path == path_to_adapter
            # We can assume that a non-builtin adapter was specified, so it's
            # either misspelled or missing from Gemfile.
            raise e.class, 'Could not load the '#{adapter}' Action Cable pubsub adapter. Ensure that the adapter is spelled correctly in config/cable.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
        def body(rack_response)
      buf = []
      rack_response[2].each { |x| buf << x }
      buf.join
    end
  end
    
        # An email was received.
    def receive(event)
      info { 'Received mail (#{event.duration.round(1)}ms)' }
      debug { event.payload[:mail] }
    end
    
          formatted
    end
    
          private
        def processed_mailer
          @processed_mailer ||= @mailer_class.new.tap do |mailer|
            mailer.params = @params
            mailer.process @action, *@args
          end
        end
    
            def restore_delivery_method
          ActionMailer::Base.deliveries.clear
          ActionMailer::Base.delivery_method = @old_delivery_method
        end
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
      APP = RoutedRackApp.new(Routes)
    
        let(:key) { Spaceship::Portal::Key.new(key_attributes) }
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file  --out=build/cloc.txt')
      end
    end
  end
end

    
      # Removes any empty directories in the formula's prefix subtree
  # Keeps any empty directions projected by skip_clean
  # Removes any unresolved symlinks
  def prune
    dirs = []
    symlinks = []
    @f.prefix.find do |path|
      if path == @f.libexec || @f.skip_clean?(path)
        Find.prune
      elsif path.symlink?
        symlinks << path
      elsif path.directory?
        dirs << path
      end
    end
    
        dirs.reverse_each do |d|
      if ARGV.dry_run? && d.children.empty?
        puts 'Would remove (empty directory): #{d}'
      else
        d.rmdir_if_possible
      end
    end
    
        formulae_maybe_with_kegs = [f] + f.old_installed_formulae
    outdated_kegs = formulae_maybe_with_kegs
                    .map(&:linked_keg)
                    .select(&:directory?)
                    .map { |k| Keg.new(k.resolved_path) }
    linked_kegs = outdated_kegs.select(&:linked?)
    
            def name
          @node.children.first
        end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral
    
          it 'registers offenses' do
        inspect_source(source)
        expect(cop.messages).to eq([missing_type,
                                    missing_begin,
                                    missing_end,
                                    missing_end])
      end