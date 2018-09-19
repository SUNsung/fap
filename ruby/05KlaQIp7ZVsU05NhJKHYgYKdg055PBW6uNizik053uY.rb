
        
        require 'active_support/core_ext/string/output_safety'
    
                  if block_given?
                @template_object.capture(builder, &block)
              else
                render_component(builder)
              end
            end
    
              def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
            store.replace(path) do
          new.build_pages do |page|
            next unless store_page?(page)
            store.write page[:store_path], page[:output]
            index.add page[:entries]
            pages.add page[:path], page[:output]
          end
    
        def insert(index, *names)
      @filters.insert assert_index(index), *filter_const(names)
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            # Remove ng-* attributes
        css('*').each do |node|
          node.attributes.each_key do |attribute|
            node.remove_attribute(attribute) if attribute.start_with? 'ng-'
          end
        end
    
      before :each do
    ENV['TEST_SH_EXPANSION'] = 'foo'
    @shell_var = '$TEST_SH_EXPANSION'
    platform_is :windows do
      @shell_var = '%TEST_SH_EXPANSION%'
    end
  end
    
      after :each do
    Object.send :remove_method, :boom
  end
    
    class PolymorphicMentions < ActiveRecord::Migration[4.2]
  def change
    remove_index :mentions, column: %i(post_id)
    remove_index :mentions, column: %i(person_id post_id), unique: true
    rename_column :mentions, :post_id, :mentions_container_id
    add_column :mentions, :mentions_container_type, :string
    add_index :mentions,
              %i(mentions_container_id mentions_container_type),
              name:   'index_mentions_on_mc_id_and_mc_type',
              length: {mentions_container_type: 191}
    add_index :mentions,
              %i(person_id mentions_container_id mentions_container_type),
              name:   'index_mentions_on_person_and_mc_id_and_mc_type',
              length: {mentions_container_type: 191},
              unique: true
    
    module Workers
  class PublishToHub < Base
    def perform(*_args)
      # don't publish to pubsubhubbub in cucumber
    end
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          it 'doesn't post' do
        expect(alice).not_to receive(:like!)
        post :create, params: like_hash
        expect(response.code).to eq('422')
      end
    end
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
        # @comment
    #   rubocop:disable ParameterLists
    def parse_property(name, parsed_name, value, prop, line, start_offset)
      # rubocop:enable ParameterLists
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file