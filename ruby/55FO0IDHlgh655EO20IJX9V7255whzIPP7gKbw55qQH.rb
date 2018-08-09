
        
        class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
          html_filters.push 'd3/clean_html', 'd3/entries_v4'
    
        options[:title] = false
    options[:root_title] = 'PHP: Hypertext Preprocessor'
    options[:skip_links] = ->(filter) { !filter.initial_page? }
    
        def process_response?(response)
      !(response.body =~ REDIRECT_RGX || response.body =~ NOT_FOUND_RGX || response.body.blank?)
    end
  end
end

    
        def initialize
      @pages = {}
    end
    
      describe ':update_pod' do
    let(:pod) { FactoryGirl.create(:pod) }
    let(:pod_url) { pod.url_to('/') }
    
        # Returns a representation of the query as an array of strings and
    # potentially {Sass::Script::Tree::Node}s (if there's interpolation in it).
    # When the interpolation is resolved and the strings are joined together,
    # this will be the string representation of this query.
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    def to_a
      Sass::Util.intersperse(queries.map {|q| q.to_a}, ', ').flatten
    end
    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
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
    
      def render(context)
    config_tag(context.registers[:site].config, @key, @tag, @classname)
  end
end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
      def human?
    params.has_key?('human') && (params['human'].nil? || as_boolean(params['human']) == true)
  end
end

    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end
    
            def allowed_types_allowed?
          @missing_allowed_types ||= @allowed_types.reject { |type| type_allowed?(type) }
          @missing_allowed_types.none?
        end
    
      class Railtie < Rails::Railtie
    initializer 'paperclip.insert_into_active_record' do |app|
      ActiveSupport.on_load :active_record do
        Paperclip::Railtie.insert
      end
    
        module ClassMethods
      # This method is a shortcut to validator classes that is in
      # 'Attachment...Validator' format. It is almost the same thing as the
      # +validates+ method that shipped with Rails, but this is customized to
      # be using with attachment validators. This is helpful when you're using
      # multiple attachment validators on a single attachment.
      #
      # Example of using the validator:
      #
      #   validates_attachment :avatar, :presence => true,
      #      :content_type => { :content_type => 'image/jpg' },
      #      :size => { :in => 0..10.kilobytes }
      #
      def validates_attachment(*attributes)
        options = attributes.extract_options!.dup