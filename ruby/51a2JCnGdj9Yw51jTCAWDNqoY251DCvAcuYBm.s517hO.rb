
        
              # Creates a text field of type 'time'.
      #
      # === Options
      # * <tt>:min</tt> - The minimum acceptable value.
      # * <tt>:max</tt> - The maximum acceptable value.
      # * <tt>:step</tt> - The acceptable value granularity.
      # * Otherwise accepts the same options as text_field_tag.
      def time_field_tag(name, value = nil, options = {})
        text_field_tag(name, value, options.merge(type: :time))
      end
    
          # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class CheckBox < Base #:nodoc:
        include Checkable
    
                  # Rename :minute and :second to :min and :sec
              default[:min] ||= default[:minute]
              default[:sec] ||= default[:second]
    
              content = if block_given?
            @template_object.capture(builder, &block)
          elsif @content.present?
            @content.to_s
          else
            render_component(builder)
          end
    
      private
    
          []
    end
    
    group :production do
  gem 'uglifier'
  gem 'newrelic_rpm'
end
    
    require 'bundler/setup'
Bundler.require :app
    
          def store_meta(store)
        json = as_json
        json[:mtime] = Time.now.to_i
        json[:db_size] = store.size(DB_FILENAME)
        store.write(META_FILENAME, json.to_json)
      end
    end
    
        def to_a
      @filters.dup
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
        def request_one(url)
      Request.run url, request_options
    end
    
            css('*[layout]').remove_attr('layout')
        css('*[layout-xs]').remove_attr('layout-xs')
        css('*[flex]').remove_attr('flex')
        css('*[flex-xs]').remove_attr('flex-xs')
        css('*[ng-class]').remove_attr('ng-class')
        css('*[align]').remove_attr('align')
        css('h1, h2, h3').remove_attr('class')
    
          private
    
      def show
    render json: collection_presenter,
           serializer: ActivityPub::CollectionSerializer,
           adapter: ActivityPub::Adapter,
           content_type: 'application/activity+json',
           skip_activities: true
  end
    
            redirect_to admin_report_path(@report), notice: I18n.t('admin.report_notes.created_msg')
      else
        @report_notes = @report.notes.latest
        @report_history = @report.history
        @form = Form::StatusBatch.new
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
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
    
          if @options[:to] == @options[:from] && !@options[:in_place]
        fmt = @options[:from]
        raise 'Error: converting from #{fmt} to #{fmt} without --in-place'
      end
    
          opts.on('--precision NUMBER_OF_DIGITS', Integer,
              'How many digits of precision to use when outputting decimal numbers.',
              'Defaults to #{Sass::Script::Value::Number.precision}.') do |precision|
        Sass::Script::Value::Number.precision = precision
      end
    
          private
    
      def migration_name
    'add_attachment_#{attachment_names.join('_')}_to_#{name.underscore.pluralize}'
  end