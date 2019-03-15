
        
                  def hidden_field
            hidden_name = @html_options[:name] || hidden_field_name
            @template_object.hidden_field_tag(hidden_name, '', id: nil)
          end
    
            private
    
              def datetime_selector(options, html_options)
            datetime = options.fetch(:selected) { value || default_datetime(options) }
            @auto_index ||= nil
    
                content
          end
        end
    
        def exists?(path, prefixes, *args)
      find_all(path, prefixes, *args).any?
    end
    
          # token - The GitHub API token to use.
      #
      # per_page - The number of objects that should be displayed per page.
      #
      # parallel - When set to true hitting the rate limit will result in a
      #            dedicated error being raised. When set to `false` we will
      #            instead just `sleep()` until the rate limit is reset. Setting
      #            this value to `true` for parallel importing is crucial as
      #            otherwise hitting the rate limit will result in a thread
      #            being blocked in a `sleep()` call for up to an hour.
      def initialize(token, per_page: 100, parallel: true)
        @octokit = Octokit::Client.new(
          access_token: token,
          per_page: per_page,
          api_endpoint: api_endpoint
        )
    
            def representation_class
          Representation::DiffNote
        end
    
          private
    
            # Returns a Hash that can be used to populate `notes.st_diff`, removing
        # the need for requesting Git data for every diff note.
        def diff_hash
          {
            diff: diff_hunk,
            new_path: file_path,
            old_path: file_path,
    }
    
              hash[:author] &&= Representation::User.from_json_hash(hash[:author])
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
          def ask_question
        $stdout.print question
        $stdout.flush
      end
    
    ##############
# Deploying  #
##############
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
        def render(context)
      file_dir = (context.registers[:site].source || 'source')
      file_path = Pathname.new(file_dir).expand_path
      file = file_path + @file