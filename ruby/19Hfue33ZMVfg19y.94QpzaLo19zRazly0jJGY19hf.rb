
        
          private
    
            it { expect(presenter.can_approve?).to eq(true) }
      end
    
            def decorate_diff!(diff)
          return diff if diff.is_a?(File)
    
      def output_chronic_duration_attribute(source_attribute)
    value = attributes[source_attribute.to_s]
    ChronicDuration.output(value, format: :short) if value
  end
end

    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
=end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
      begin
    require 'gollum-lib'
    wiki = Gollum::Wiki.new(gollum_path, wiki_options)
    if !wiki.exist? then
      raise Gollum::InvalidGitRepositoryError
    end
    if wiki_options[:plantuml_url]
      Gollum::Filter::PlantUML.configure do |config|
        puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
        config.url = wiki_options[:plantuml_url]
      end
    end
    puts
    puts 'Loaded Gollum wiki at:'
    puts '#{File.expand_path(gollum_path).inspect}'
    puts
    puts 'Example API calls:'
    puts %(    page = wiki.page('page-name'))
    puts %(    # => <Gollum::Page>)
    puts
    puts %(    page.raw_data)
    puts %(    # => '# My wiki page')
    puts
    puts %(    page.formatted_data)
    puts %(    # => '<h1>My wiki page</h1>')
    puts
    puts 'Full API documentation at:'
    puts 'https://github.com/gollum/gollum-lib'
    puts
    IRB.start_session(binding)
  rescue Gollum::InvalidGitRepositoryError, Gollum::NoSuchPathError
    puts 'Invalid Gollum wiki at #{File.expand_path(gollum_path).inspect}'
    exit 0
  end
else
  require 'gollum/app'
  Precious::App.set(:gollum_path, gollum_path)
  Precious::App.set(:wiki_options, wiki_options)
  Precious::App.settings.mustache[:templates] = wiki_options[:template_dir] if wiki_options[:template_dir]
    
          it 'should have the custom version' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.version } == 'custom-version'
      end
    
      config.vm.define 'debian7' do |debian7|
    debian7.vm.box = 'puppetlabs/centos-7.0-64-puppet'
  end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
      # This method removes excluded files from the staging_path. Subclasses can
  # remove the files during the input phase rather than deleting them here
  def exclude
    return if attributes[:excludes].nil?
    
        open(path, 'r') do |iscript|
      lines = iscript.each
      begin
        while true
          line = lines.next
          # This regex picks up beginning names of posix shell
          # functions
          # Examples:
          #   fname() {
          #   fname() { echo hi }
          m = FIND_SCRIPT_FUNCTION_LINE.match(line)
          if not m.nil? and look_for.include? m[1]
            if not m[2].nil?
              functions[m[1]].push(m[2].rstrip())
            end
            gobble_function(lines, functions[m[1]])
          else
            global_lines.push(line.rstrip())
          end
        end
      rescue StopIteration
      end
    end
    look_for.each do |name|
      # Add global lines to each function to preserve global variables, etc.
      functions[name] = global_lines + functions[name]
    end
    return functions
  end # def parse_install_script
end # class FPM::Package::Pacman

    }
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']