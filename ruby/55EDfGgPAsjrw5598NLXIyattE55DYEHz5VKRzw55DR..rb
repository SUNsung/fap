
        
          describe '#list_files_for' do
    it 'returns the full path of the found files' do
      result = finder.list_files_for('files/html')
    
      def perform(project_id, user_id)
    project = Project.find(project_id)
    user = User.find(user_id)
    
        delegate :repository, to: :project
    
            @filters << filter
      end
    
        before do
      entity.parent = group
    end
  end
end

    
        allow(subject).to receive(:diff_files) { [readme_file, other_file, nil_path_file] }
    expect(readme_file).to receive(:unfold_diff_lines).with(position)
    
          def lines
        lines = []
        @diff.diff.split('\n')[2..-1].each_with_index do |line, line_index|
          lines << { :line  => line,
                     :class => line_class(line),
                     :ldln  => left_diff_line_number(0, line),
                     :rdln  => right_diff_line_number(0, line) }
        end if @diff
        lines
      end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
          def header_format
        has_header && @header.format.to_s
      end
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
            def image_params
          params.require(:image).permit(permitted_image_attributes)
        end
    
            private
    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
              state = @states.last
          respond_with(@states) if stale?(state)
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :show).find(params[:stock_location_id])
        end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end

    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end
    
            def variant_includes
          [{ option_values: :option_type }, :product, :default_price, :images, { stock_items: :stock_location }]
        end
      end
    end
  end
end

    
            def show
          respond_with(zone)
        end
    
                private
    
          it 'should have the custom version' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.version } == 'custom-version'
      end
    
        # Override package settings if they are not the default flag values
    # the below proc essentially does:
    #
    # if someflag != default_someflag
    #   input.someflag = someflag
    # end
    set = proc do |object, attribute|
      # if the package's attribute is currently nil *or* the flag setting for this
      # attribute is non-default, use the value.
      if object.send(attribute).nil? || send(attribute) != send('default_#{attribute}')
        logger.info('Setting from flags: #{attribute}=#{send(attribute)}')
        object.send('#{attribute}=', send(attribute))
      end
    end
    set.call(input, :architecture)
    set.call(input, :category)
    set.call(input, :description)
    set.call(input, :epoch)
    set.call(input, :iteration)
    set.call(input, :license)
    set.call(input, :maintainer)
    set.call(input, :name)
    set.call(input, :url)
    set.call(input, :vendor)
    set.call(input, :version)
    
        if path.nil?
      return @staging_path
    else
      return File.join(@staging_path, path)
    end
  end # def staging_path
    
      def compression_option
    case self.attributes[:pacman_compression]
      when nil, 'xz'
        return '--xz'
      when 'none'
        return ''
      when 'gz'
        return '-z'
      when 'bzip2'
        return '-j'
      else
        return '--xz'
      end
  end
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
        unless safesystem(*args)
      raise 'Command failed while creating payload tar: #{args}'
    end
    payload_tar
  end
    
        def name
      project.name
    end
    
        attr_reader :commands, :index, :name, :project
    
        context 'attach is false in yaml' do
      before { project.yaml['attach'] = false }
      it 'returns false' do
        expect(project.attach?).to be_falsey
      end
    end
    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
      'echo '#{standard_options.join('\n')}''
end

    
      describe '#render' do
    it 'renders the template' do
      expect(File).to receive(:read).at_least(:once) { 'wemux ls 2>/dev/null' }
    
            expect(described_class.directories).to eq \
          ['XDG', 'HOME']
      end
    end