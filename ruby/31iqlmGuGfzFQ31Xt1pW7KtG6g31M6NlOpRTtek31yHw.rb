
        
            # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
        def default_defaults(options)
      @defaults = Hash.new
      @defaults.merge!(options[:defaults]) if options[:defaults]
    end
    
      def unsilence?
    staff?
  end
    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
            expect_updated_sign_in_at(user)
        expect(Redis.current.zcard(FeedManager.instance.key(:home, user.account_id))).to eq 3
        expect(Redis.current.get('account:#{user.account_id}:regeneration')).to be_nil
      end
    end
    
    sitelist = ARGV.shift() || usage()
output   = ARGV.shift() || usage()
    
          when :login_fail
    
    			if temp[2].length == 2
				self.block[-1][-1] << temp[2][0].ljust(8)
				self.block[-1][-1] << temp[2][1]
			elsif temp[2].length == 3
				self.block[-1][-1] << temp[2][0].ljust(8)
				self.block[-1][-1] << temp[2][1]
				self.block[-1][-1] << ' '
				self.block[-1][-1] << temp[2][2]
			else
				self.block[-1][-1] << temp[2].to_s
			end
		end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
      # POST /books
  # POST /books.json
  def create
    @book = Book.new(book_params)
    
            def operator_assignment_node
          return nil unless node.parent
          return nil unless OPERATOR_ASSIGNMENT_TYPES.include?(node.parent.type)
          return nil unless node.sibling_index.zero?
          node.parent
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

    
              lambda do |corrector|
            corrector.replace(center.source_range, new_center)
          end
        end
      end
    end
  end
end

    
                end
          RUBY
        end
      end
    
    shared_examples_for 'multiline literal brace layout trailing comma' do
  let(:prefix) { '' } # A prefix before the opening brace.
  let(:suffix) { '' } # A suffix for the line after the closing brace.
  let(:open) { nil } # The opening brace.
  let(:close) { nil } # The closing brace.
  let(:a) { 'a' } # The first element.
  let(:b) { 'b' } # The second element.
    
          content_type 'application/json'
      LogStash::Json.dump(data, {:pretty => pretty?})
    else
      content_type 'text/plain'
      data.to_s
    end
  end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end
    
      def file_fetch(url, sha1, target)
    filename = File.basename( URI(url).path )
    output = '#{target}/#{filename}'
    begin
      actual_sha1 = file_sha1(output)
      if actual_sha1 != sha1
        fetch(url, sha1, output)
      end
    rescue Errno::ENOENT
      fetch(url, sha1, output)
    end
    return output
  end
    
    When /^(?:|I )select '([^']*)' from '([^']*)'$/ do |value, field|
  select(value, :from => field)
end
    
        # Returns the smaller of the two dimensions
    def smaller
      [height, width].min
    end
    
            def failure_message
          'Attachment #{@attachment_name} should be required'
        end
    
                if options.has_key?(validator_kind)
              validator_options = options.delete(validator_kind)
              validator_options = {} if validator_options == true
              conditional_options = options.slice(:if, :unless)
              Array.wrap(validator_options).each do |local_options|
                method_name = Paperclip::Validators.const_get(constant.to_s).helper_method_name
                send(method_name, attributes, local_options.merge(conditional_options))
              end
            end
          end
        end
      end