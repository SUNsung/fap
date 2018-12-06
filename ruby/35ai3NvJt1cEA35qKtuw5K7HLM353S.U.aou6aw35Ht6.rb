
        
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
    
              def tag_id(index = nil)
            # a little duplication to construct less strings
            case
            when @object_name.empty?
              sanitized_method_name.dup
            when index
              '#{sanitized_object_name}_#{index}_#{sanitized_method_name}'
            else
              '#{sanitized_object_name}_#{sanitized_method_name}'
            end
          end
    
            def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
              super(object_name, method_name, template_object, options)
        end
    
            class << self
          def field_type
            @field_type ||= name.split('::').last.sub('Field', '').downcase
          end
        end
    
        initializer 'action_view.per_request_digest_cache' do |app|
      ActiveSupport.on_load(:action_view) do
        unless ActionView::Resolver.caching?
          app.executor.to_run ActionView::Digestor::PerExecutionDigestCacheExpiry
        end
      end
    end
    
        desc 'Commits the version to github repository'
    task :commit_version do
      sh <<-SH
        sed -i 's/.*VERSION.*/  VERSION = '#{source_version}'/' lib/sinatra/version.rb
        sed -i 's/.*VERSION.*/    VERSION = '#{source_version}'/' sinatra-contrib/lib/sinatra/contrib/version.rb
        sed -i 's/.*VERSION.*/    VERSION = '#{source_version}'/' rack-protection/lib/rack/protection/version.rb
      SH
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
    task :gemspec => 'rack-protection.gemspec'
task :default => :spec
task :test    => :spec

    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
    When /^(?:|I )attach the file '([^']*)' to '([^']*)'$/ do |path, field|
  attach_file(field, File.expand_path(path))
end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end