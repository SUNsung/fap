
        
        Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    require 'jekyll'
require 'mercenary'
    
          def comment_line(comment_line); end
    
      matter = matter.join.chomp
  content = \
    if !input_hash['input'] || !input_hash['filter']
      then input_hash['content']
    else '{{ #{input_hash['input']} | ' \
        '#{input_hash['filter']} }}'
    end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
            def strip_coderay_prefix(hash)
          hash.each_with_object({}) do |(key, val), hsh|
            cleaned_key = key.to_s.gsub(%r!\Acoderay_!, '')
    
        def handle_tls_error!(e)
      # Apple has upgraded its App Store Connect servers to require TLS 1.2, but
      # system Ruby 2.0 does not support it. We want to suggest that users upgrade
      # their Ruby version
      suggest_ruby_reinstall(e)
      display_user_error!(e, e.to_s)
    end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            sign: true
          })
        end').runner.execute(:test)
    
          it 'handles no extension or extensions parameters' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}'')
      end
    
          it 'generates the correct git command with an array of paths and/or pathspecs' do
        result = Fastlane::FastFile.new.parse('lane :test do
          git_commit(path: ['./fastlane/*.md', './LICENSE'], message: 'message')
        end').runner.execute(:test)
    
          it 'yields command output' do
        expect_command('ls', '-la', exitstatus: 1, output: 'Heeeelp! Something went wrong.')
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to eq('Heeeelp! Something went wrong.')
        end
      end
    
        it 'returns an active nav link' do
      stub(self).current_page?('/things') { true }
      nav = nav_link('Things', '/things')
      expect(nav).to be_html_safe
      a = Nokogiri(nav).at('li.active > a[href='/things']')
      expect(a).to be_a Nokogiri::XML::Element
      expect(a.text.strip).to eq('Things')
    end
    
      it 'converts values to Float' do
    expect(location.lat).to be_a Float
    expect(location.lat).to eq 2.0
    expect(location.lng).to be_a Float
    expect(location.lng).to eq 3.0
    expect(location.radius).to be_a Float
    expect(location.radius).to eq 300.0
    expect(location.speed).to be_a Float
    expect(location.speed).to eq 2.0
    expect(location.course).to be_a Float
    expect(location.course).to eq 30.0
  end
    
      describe '#log_length' do
    it 'defaults to 200' do
      expect(AgentLog.log_length).to eq(200)
    end
  end
end

    
      # Setup a color scheme called 'bright' than can be used to add color codes
  # to the pattern layout. Color schemes should only be used with appenders
  # that write to STDOUT or STDERR; inserting terminal color codes into a file
  # is generally considered bad form.
  Logging.color_scheme('bright',
                       levels:  {
                         info:  :green,
                         warn:  :yellow,
                         error: :red,
                         fatal: %i(white on_red)
                       },
                       date:    :blue,
                       logger:  :cyan,
                       message: :magenta
                      )
    
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
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
          it 'should not be catched when it is unexpected' do
        @target = alice.post :status_message, text: 'AWESOME', to: @alices_aspect.id
        allow(alice).to receive(:like!).and_raise('something')
        allow(@controller).to receive(:current_user).and_return(alice)
        expect { post :create, params: like_hash, format: :json }.to raise_error('something')
      end
    end
  end
    
        context 'on my own post' do
      before do
        aspect_to_post = alice.aspects.where(:name => 'generic').first
        @post = alice.post :status_message, :text => 'something', :to => aspect_to_post
      end
    
          # An array containing the arguments of the method definition.
      #
      # @return [Array<Node>] the arguments of the method definition
      def arguments
        node_parts[1]
      end