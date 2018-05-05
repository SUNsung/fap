
        
          def developer_prefix
    `xcode-select --print-path`.strip
  end
    
          private
    
          #-----------------------------------------------------------------------#
    end
  end
end

    
          def installed_gem_version(gem_name)
        Gem.loaded_specs[gem_name].version
      end
    
          def assert_valid_stage_names(names)
        invalid = names.find { |n| RESERVED_NAMES.include?(n) }
        return if invalid.nil?
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
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
    
        module TableDefinition
      def attachment(*attachment_names)
        options = attachment_names.extract_options!
        attachment_names.each do |attachment_name|
          COLUMNS.each_pair do |column_name, column_type|
            column_options = options.merge(options[column_name.to_sym] || {})
            column('#{attachment_name}_#{column_name}', column_type, column_options)
          end
        end
      end