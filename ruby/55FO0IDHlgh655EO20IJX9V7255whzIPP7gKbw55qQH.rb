
        
        def bottle_resolve_formula_names(bottle_file)
  receipt_file_path = bottle_receipt_path bottle_file
  receipt_file = Utils.popen_read('tar', '-xOzf', bottle_file, receipt_file_path)
  name = receipt_file_path.split('/').first
  tap = Tab.from_file_content(receipt_file, '#{bottle_file}/#{receipt_file_path}').tap
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
      def print_remaining_files(files, root, other = '')
    case files.length
    when 0
      # noop
    when 1
      puts files
    else
      puts '#{root}/ (#{files.length} #{other}files)'
    end
  end
end

    
      SEARCHABLE_TAPS = OFFICIAL_TAPS.map { |tap| ['Homebrew', tap] } + [
    %w[Caskroom cask],
    %w[Caskroom versions]
  ]
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      protected
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
        def is_navigational_format?
      Devise.navigational_formats.include?(request_format)
    end
    
      def new
    @user_credential = current_user.user_credentials.build
    
    class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
        def register_compass_extension
      ::Compass::Frameworks.register(
          'bootstrap',
          :version               => Bootstrap::VERSION,
          :path                  => gem_path,
          :stylesheets_directory => stylesheets_path,
          :templates_directory   => File.join(gem_path, 'templates')
      )
    end
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
end

    
      def weekly_user_stats
    @created_users_by_week = Hash.new{ |h,k| h[k] = [] }
    @created_users = User.where('username IS NOT NULL and created_at IS NOT NULL')
    @created_users.find_each do |u|
      week = u.created_at.beginning_of_week.strftime('%Y-%m-%d')
      @created_users_by_week[week] << u.username
    end
    
    module Api
  module OpenidConnect
    class ClientsController < ApplicationController
      skip_before_action :verify_authenticity_token
    
    public_dir      = 'public'    # compiled site directory
source_dir      = 'source'    # source file directory
blog_index_dir  = 'source'    # directory for your blog's index page (if you put your index in source/blog/index.html, set this to 'source/blog')
deploy_dir      = '_deploy'   # deploy directory (for Github pages deployment)
stash_dir       = '_stash'    # directory to stash posts for speedy generation
posts_dir       = '_posts'    # directory for blog files
themes_dir      = '.themes'   # directory for blog files
new_post_ext    = 'markdown'  # default new post file extension when using the new_post task
new_page_ext    = 'markdown'  # default new page file extension when using the new_page task
server_port     = '4000'      # port for preview server eg. localhost:4000
    
        def generate(site)
      site.write_category_indexes
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
          def get_shallow(*path)
        snapshot.metric_store.get_shallow(*path)
      end
    
      def setup_multi_encode!
    @has_encode_sync = self.methods.include?(:encode_sync)
    
      context 'called with two widths' do
    it 'applies to alternating sides' do
      rule = 'border-width: 2px 3px'
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'