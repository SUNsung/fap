
        
              key = Spaceship::Portal::Key.create(name: 'New Key', apns: true, device_check: true, music_id: 'some-music-id')
      expect(key).to be_instance_of(Spaceship::Portal::Key)
      expect(key.id).to eq('a-new-key-id')
    end
  end
    
          it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
            expect(result).to eq('/usr/local/bin/cloc  --by-file --xml  --out=/tmp/cloc.xml')
      end
    
      def theme_color
    '#282c37'
  end
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
    ###
### dependencies
###
    
            def on_array(node)
          process(node, '%i', '%I', '%w', '%W')
        end
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies the use of `Regexp#match` or `String#match`, which
      # returns `#<MatchData>`/`nil`. The return value of `=~` is an integral
      # index/`nil` and is more performant.
      #
      # @example
      #   # bad
      #   do_something if str.match(/regex/)
      #   while regex.match('str')
      #     do_something
      #   end
      #
      #   # good
      #   method(str =~ /regex/)
      #   return value unless regex =~ 'str'
      class RedundantMatch < Cop
        MSG = 'Use `=~` in places where the `MatchData` returned by ' \
              '`#match` will not be used.'.freeze
    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
              add_offense(node)
        end
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is falsey.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the falsey branch node of the `if` node
      # @return [nil] when there is no else branch
      def else_branch
        node_parts[2]
      end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end
    
            def failure_message
          'Should have an attachment named #{@attachment_name}'
        end
    
            def accepted_types_and_failures
          if @allowed_types.present?
            'Accept content types: #{@allowed_types.join(', ')}\n'.tap do |message|
              if @missing_allowed_types.present?
                message << '  #{@missing_allowed_types.join(', ')} were rejected.'
              else
                message << '  All were accepted successfully.'
              end
            end
          end
        end
        def rejected_types_and_failures
          if @rejected_types.present?
            'Reject content types: #{@rejected_types.join(', ')}\n'.tap do |message|
              if @missing_rejected_types.present?
                message << '  #{@missing_rejected_types.join(', ')} were accepted.'
              else
                message << '  All were rejected successfully.'
              end
            end
          end
        end
    
          def validate_each(record, attribute, value)
        base_attribute = attribute.to_sym
        attribute = '#{attribute}_content_type'.to_sym
        value = record.send :read_attribute_for_validation, attribute