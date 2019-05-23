
        
                def render(&block)
          render_collection_for(RadioButtonBuilder, &block)
        end
    
      def build(theme_ids)
    builder = Builder.new
    
        # Update denormalzied posts_read_count
    DB.exec(<<~SQL, seen_at: last_seen)
      UPDATE user_stats SET posts_read_count = X.c
      FROM
      (SELECT pt.user_id,
              COUNT(*) AS c
       FROM users AS u
       JOIN post_timings AS pt ON pt.user_id = u.id
       JOIN topics t ON t.id = pt.topic_id
       WHERE u.last_seen_at > :seen_at AND
             t.archetype = 'regular' AND
             t.deleted_at IS NULL
       GROUP BY pt.user_id) AS X
       WHERE X.user_id = user_stats.user_id AND
             X.c <> posts_read_count
    SQL
  end
    
      def cookie_hash(unhashed_auth_token)
    hash = {
      value: unhashed_auth_token,
      httponly: true,
      expires: SiteSetting.maximum_session_age.hours.from_now,
      secure: SiteSetting.force_https
    }
    
    class SinatraStaticServer < Sinatra::Base
    
    require './plugins/pygments_code'
require './plugins/raw'
require 'pathname'
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end