
        
            headers
  end
end
    
          theme.destroy!
    
        # Security: safe due to route constraint
    cache_file = '#{DISK_CACHE_PATH}/#{params[:digest]}.js'
    
    # == Schema Information
#
# Table name: user_stats
#
#  user_id                  :integer          not null, primary key
#  topics_entered           :integer          default(0), not null
#  time_read                :integer          default(0), not null
#  days_visited             :integer          default(0), not null
#  posts_read_count         :integer          default(0), not null
#  likes_given              :integer          default(0), not null
#  likes_received           :integer          default(0), not null
#  topic_reply_count        :integer          default(0), not null
#  new_since                :datetime         not null
#  read_faq                 :datetime
#  first_post_created_at    :datetime
#  post_count               :integer          default(0), not null
#  topic_count              :integer          default(0), not null
#  bounce_score             :float            default(0.0), not null
#  reset_bounce_score_after :datetime
#  flags_agreed             :integer          default(0), not null
#  flags_disagreed          :integer          default(0), not null
#  flags_ignored            :integer          default(0), not null
#  first_unread_at          :datetime         not null
#

    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
      it 'should set the Content Security Policy' do
    expect(
      get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']
    ).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end
    
    class SinatraStaticServer < Sinatra::Base
    
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
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
      # mknod is __xmknod in glibc a wrapper around mknod to handle
  # various stat struct formats. See bits/stat.h in glibc source
  begin
    attach_function :mknod, :mknod, [:string, :uint, :ulong], :int
  rescue FFI::NotFoundError
    # glibc/io/xmknod.c int __xmknod (int vers, const char *path, mode_t mode, dev_t *dev)
    attach_function :xmknod, :__xmknod, [:int, :string, :uint, :pointer], :int
  end