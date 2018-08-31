
        
        $LOAD_PATH.unshift File.expand_path('lib', __dir__)
require 'jekyll/version'
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
      matter = matter.join.chomp
  content = \
    if !input_hash['input'] || !input_hash['filter']
      then input_hash['content']
    else '{{ #{input_hash['input']} | ' \
        '#{input_hash['filter']} }}'
    end
    
        def limit_reached_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:limit_reached)[0] || false
    end
    
      it 'correctly sets notification level' do
    moderator = Fabricate(:moderator)
    
      smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for Staff category!'
        end