
        
              expect(value_for(user.id, dt)).to eq(0)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
        def sort_fn(a, b)
      if (a.getbyte(0) >= 49 && a.getbyte(0) <= 57) || (b.getbyte(0) >= 49 && b.getbyte(0) <= 57)
        a_split = a.split(SPLIT_INTS)
        b_split = b.split(SPLIT_INTS)
    
        def data_url_string?(str)
      str.start_with?(DATA_URL)
    end
    
            @counter += 1
    
    require 'active_support/subscriber'
    
              node['data-language'] = 'typescript' if node['path'].try(:ends_with?, '.ts')
          node['data-language'] = 'html' if node['path'].try(:ends_with?, '.html')
          node['data-language'] = 'css' if node['path'].try(:ends_with?, '.css')
          node['data-language'] = 'js' if node['path'].try(:ends_with?, '.js')
          node['data-language'] = 'json' if node['path'].try(:ends_with?, '.json')
          node['data-language'] = node['language'].sub(/\Ats/, 'typescript').strip if node['language']
          node['data-language'] ||= 'typescript' if node.content.start_with?('@')
    
            css('.nav-index-section').each do |node|
          node.content = node.content
        end
    
            doc
      end
    end
  end
end

    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
            # rubocop:disable Style/MethodMissing
        def method_missing(key, value=nil)
          if value
            set(lvalue(key), value)
          else
            fetch(key)
          end
        end
        # rubocop:enable Style/MethodMissing
    
          attr_reader :locations, :values, :fetched_keys
    
          * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above
        copyright notice, this list of conditions and the following
        disclaimer in the documentation and/or other materials provided
        with the distribution.
      * Neither the name of Google Inc. nor the names of its
        contributors may be used to endorse or promote products derived
        from this software without specific prior written permission.
    
          def escaped_name
        CGI.escape(@name)
      end
    
        get page
    assert_match /'\/custom.js'/, last_response.body
    Precious::App.set(:wiki_options, { :js => nil })
  end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
        post '/edit/' + CGI.escape('한글'), :page => 'k', :content => '바뀐 text',
         :format                            => 'markdown', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
        # Ensure path begins with a single leading slash
    def clean_path(path)
      if path
        (path[0] != '/' ? path.insert(0, '/') : path).gsub(/\/{2,}/, '/')
      end
    end
    
        def self.add_writer(name)
      define_singleton_method('#{name}=') do |value|
        value.builder_method name
        instance_variable_set :'@#{name}', value
      end
    end
    
    module ActiveAdmin
  module BatchActions
    
        def authorized?(action_name, abstract_model = nil, object = nil)
      object = nil if object.try :new_record?
      action(action_name, abstract_model, object).try(:authorized?)
    end
    
        def field_for(field)
      field.read_only? ? @template.content_tag(:div, field.pretty_value, class: 'form-control-static') : field.render
    end
    
        def ordered_filters
      return @ordered_filters if @ordered_filters.present?
      @index = 0
      @ordered_filters = (params[:f].try(:permit!).try(:to_h) || @model_config.list.filters).inject({}) do |memo, filter|
        field_name = filter.is_a?(Array) ? filter.first : filter
        (filter.is_a?(Array) ? filter.last : {(@index += 1) => {'v' => ''}}).each do |index, filter_hash|
          if filter_hash['disabled'].blank?
            memo[index] = {field_name => filter_hash}
          else
            params[:f].delete(field_name)
          end
        end
        memo
      end.to_a.sort_by(&:first)
    end
    
            def name
          association.name.to_sym
        end
    
            # http://getbootstrap.com/2.3.2/base-css.html#icons
        register_instance_option :link_icon do
          'icon-question-sign'
        end