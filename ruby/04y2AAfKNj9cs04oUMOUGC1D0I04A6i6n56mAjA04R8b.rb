
        
                def to_s
          @symbol.to_s
        end
        alias to_str to_s
    
        def order_by_category_sql(dir)
      -'CASE WHEN categories.id = #{SiteSetting.uncategorized_category_id.to_i} THEN '' ELSE categories.name END #{dir}'
    end
    
    describe ContentSecurityPolicy::Builder do
  let(:builder) { described_class.new }
    
        def extend_directive(directive, sources)
      return unless extendable?(directive)
    
      describe 'script-src' do
    it 'always has self, logster, sidekiq, and assets' do
      script_srcs = parse(policy)['script-src']
      expect(script_srcs).to include(*%w[
        'unsafe-eval'
        'report-sample'
        http://test.localhost/logs/
        http://test.localhost/sidekiq/
        http://test.localhost/mini-profiler-resources/
        http://test.localhost/assets/
        http://test.localhost/brotli_asset/
        http://test.localhost/extra-locales/
        http://test.localhost/highlight-js/
        http://test.localhost/javascripts/
        http://test.localhost/plugins/
        http://test.localhost/theme-javascripts/
        http://test.localhost/svg-sprite/
      ])
    end
    
              timings = MethodProfiler.stop
          if timings && duration = timings[:total_duration]
            headers['X-Runtime'] = '#{'%0.6f' % duration}'
          end
    
    Given /^I start the rails application$/ do
  cd('.') do
    require 'rails'
    require './config/environment'
    require 'capybara'
    Capybara.app = Rails.application
  end
end
    
        def self.register(klass, attachment_name, attachment_options)
      instance.register(klass, attachment_name, attachment_options)
    end
    
        def calculated_type_matches
      possible_types.select do |content_type|
        content_type == type_from_file_contents
      end
    end
    
        def raise_because_imagemagick_missing
      raise Errors::CommandNotFoundError.new('Could not run the `identify` command. Please install ImageMagick.')
    end
  end
end

    
        # Returns a the attachment hash.  See Paperclip::Attachment#hash_key for
    # more details.
    def hash attachment=nil, style_name=nil
      if attachment && style_name
        attachment.hash_key(style_name)
      else
        super()
      end
    end
    
    Capybara.javascript_driver = :javascript_test
    
        describe '#title' do
      it 'returns the page title' do
        expect(string.title).to eq('simple_node')
      end
    end
    
    Given /^that the uploader reverses the filename$/ do
  @klass.class_eval do
    def filename
      super.reverse unless super.blank?
    end
  end
end
    
          def initialize(uploader)
        @uploader = uploader
      end
    
          class MiniMagickWrapper # :nodoc:
        attr_reader :image
        def width
          image[:width]
        end