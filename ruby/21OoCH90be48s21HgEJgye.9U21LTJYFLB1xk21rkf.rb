  def test_at3
    t2000 = get_t2000
    assert_equal(t2000, Time.at(t2000))
#    assert_raise(RangeError) do
#      Time.at(2**31-1, 1_000_000)
#      Time.at(2**63-1, 1_000_000)
#    end
#    assert_raise(RangeError) do
#      Time.at(-2**31, -1_000_000)
#      Time.at(-2**63, -1_000_000)
#    end
  end
    
    describe :string_unpack_32bit_be_signed, shared: true do
  it 'decodes an int with most significant bit set as a negative number' do
    '\xff\x00\xaa\x00'.unpack(unpack_format()).should == [-16733696]
  end
end
    
        def find_remote(username, domain)
      AccountFinder.new(username, domain).account
    end
  end
    
    namespace :db do
  namespace :migrate do
    desc 'Setup the db or migrate depending on state of db'
    task setup: :environment do
      begin
        if ActiveRecord::Migrator.current_version.zero?
          Rake::Task['db:migrate'].invoke
          Rake::Task['db:seed'].invoke
        end
      rescue ActiveRecord::NoDatabaseError
        Rake::Task['db:setup'].invoke
      else
        Rake::Task['db:migrate'].invoke
      end
    end
  end
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description
    
        it 'does not track when there is a recent sign in' do
      user.update(current_sign_in_at: 60.minutes.ago)
      prior = user.current_sign_in_at
      sign_in user, scope: :user
      get :show
    
              If there is multiple cache for various versions of the requested pod,
          you will be asked which one to clean. Use `--all` to clean them all.
    
            # Clones the template from the remote in the working directory using
        # the name of the Pod.
        #
        # @return [void]
        #
        def clone_template
          UI.section('Cloning `#{template_repo_url}` into `#{@name}`.') do
            git! ['clone', template_repo_url, @name]
          end
        end
    
    desc 'Move sass to sass.old, install sass theme updates, replace sass/custom with sass.old/custom'
task :update_style, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('sass.old')
    puts 'removed existing sass.old directory'
    rm_r 'sass.old', :secure=>true
  end
  mv 'sass', 'sass.old'
  puts '## Moved styles into sass.old/'
  cp_r '#{themes_dir}/'+theme+'/sass/', 'sass', :remove_destination=>true
  cp_r 'sass.old/custom/.', 'sass/custom/', :remove_destination=>true
  puts '## Updated Sass ##'
end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
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
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
      end
end
